#include <stdio.h>

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: The number to extract the bit from
 * @index: The index of the bit to retrieve (0-based)
 *
 * Description: This function retrieves the value
 * (0 or 1) of the bit at the
 * specified index in the given unsigned long integer 'n'
 *
 * Return: The value of the bit
 * at the specified index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
return ((n & mask) ? 1 : 0);
}
