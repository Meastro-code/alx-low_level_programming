/**
 * get_bit - Returns value of bit at given index
 * @n: number to check bit from
 * @index: index of bit to get, starting from 0
 *
 * Return: value of bit at index, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
mask = 1UL << index;
if ((n & mask) == 0)
{
return (0);
}
else
{
return (1);
}
}
