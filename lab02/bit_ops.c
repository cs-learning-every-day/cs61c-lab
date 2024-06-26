#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n)
{
    /* YOUR CODE HERE */
    return (x >> n) & 0x1;
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v)
{
    /* YOUR CODE HERE */
    unsigned nth_value = get_bit(*x, n);

    // set nth value to zero
    *x = *x & ~(nth_value << n);

    // set nth value to v
    *x = *x | (v << n);
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n)
{
    /* YOUR CODE HERE */
    *x = *x ^ (1 << n);
}
