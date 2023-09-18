/**
 * flip_bits - Counts number of bits to flip
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Description: This function calculates
 * the number of bits that need to be
 * flipped in order to change the
 * unsigned long integer 'n' into 'm'.
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;
unsigned int count = 0;
while (xor_result > 0)
{
count += xor_result & 1;
xor_result >>= 1;
}
return (count);
}
