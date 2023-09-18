/**
 * get_endianness - Checks endianness of system
 *
 * Description: This function checks 
 * the endianness of the system by creating
 * an integer with a known byte order
 * and examining the first byte in memory
 *
 * Return: 0 big endian 1 little endian
 */
int get_endianness(void)
{
unsigned int test = 1;
char *ptr = (char *)&test;
return (*ptr == 1);
}
