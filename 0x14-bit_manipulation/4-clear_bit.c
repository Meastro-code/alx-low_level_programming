/**
 * clear_bit - Sets value of bit to 0 at index
 * @n: Pointer to number where bit will be cleared
 * @index: The index of bit to clear (0-based)
 *
 * Description: This function sets the bit
 * at the specified index in the
 * unsigned long integer pointed to by 'n' to 0
 *
 * Return: 1 if it worked or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = *n & ~(1UL << index);
return (1);
}
