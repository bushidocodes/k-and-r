#include <math.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * K&R Exercise 2-6
 * Page 49
 * Write a function setbits(x, p, n, y) that returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged
 * Completed 9/11/19
 **/

unsigned getbits(unsigned x, unsigned p, unsigned n);
void stringify_bitfield(char *result, unsigned bitfield);
unsigned generate_mask(unsigned starting_bit, unsigned number_of_bits);
unsigned get_rightmost_bits(unsigned bitfield, unsigned number_of_bits);

unsigned getbits(unsigned x, unsigned p, unsigned n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned generate_mask(unsigned starting_bit, unsigned number_of_bits)
{
    unsigned mask = 0;
    for (int current_bit = starting_bit; current_bit < starting_bit + number_of_bits; current_bit++)
    {
        mask += (unsigned)pow(2, (7 - current_bit));
    }
    return mask;
}

unsigned get_rightmost_bits(unsigned bitfield, unsigned number_of_bits)
{
    return getbits(bitfield, 8 - number_of_bits, number_of_bits);
}

unsigned setbits(unsigned bitfield, unsigned start_position, unsigned number_of_bits, unsigned right_adjusted_bitfield)
{
    // Using a negative mask to wipe out the bits I want to overwrite
    bitfield = bitfield & ~generate_mask(start_position, number_of_bits);
    // And Use a negative mask on the right adjusted bitfield to set the bits I don't want to change to 0
    right_adjusted_bitfield = right_adjusted_bitfield & ~generate_mask(0, 8 - number_of_bits);
    // Align the right adjusted bitfield to the start position
    right_adjusted_bitfield = right_adjusted_bitfield << ((8 - number_of_bits) - start_position);
    // And then take an exclusive OR.
    bitfield = bitfield ^ right_adjusted_bitfield;
    return bitfield;
}

void stringify_bitfield(char *result, unsigned bitfield)
{
    unsigned buffer = bitfield;
    unsigned bit_value;
    for (int bit_pos = 7; bit_pos >= 0; bit_pos--)
    {
        bit_value = (unsigned)pow(2, bit_pos);
        if (buffer >= bit_value)
        {
            result[7 - bit_pos] = '1';
            buffer -= bit_value;
        }
        else
        {
            result[7 - bit_pos] = '0';
        }
    }
    result[8] = '\0';
}

int main(void)
{
    char *result = malloc(sizeof(char) * 9);
    stringify_bitfield(result, setbits(255, 3, 3, 0));
    printf("%s\n", result);
    free(result);
    return 0;
}