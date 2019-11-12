/**
 * K&R Exercise 2-7
 * Page 49
 * Write a function invert(x, p, n) that returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged
 * Completed
 **/

unsigned generate_mask(unsigned starting_bit, unsigned number_of_bits)
{
    unsigned mask = 0;
    for (int current_bit = starting_bit; current_bit < starting_bit + number_of_bits; current_bit++)
    {
        mask += (unsigned)pow(2, (7 - current_bit));
    }
    return mask;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = generate_mask(p, n);
    return x ^ mask; // 
}

int main(void)
{
    return 0;
}