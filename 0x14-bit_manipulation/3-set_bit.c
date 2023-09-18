/**
 * set_bit - Sets  value of bit to 1 at given index
 * @n: Pointer to  number where  bit will be set
 * @index: The index of the bit to set (0-based)
 *
 * Description: This function sets the bit 
 *at the specified index in the
 * unsigned long integer pointed to by 'n' to 1
 *
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n = *n | (1UL << index);
return (1);
}
