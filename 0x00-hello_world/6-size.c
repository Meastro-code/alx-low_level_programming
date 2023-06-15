#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int m;
long long int p;
float h;
printf("Size of a char: %d byte(s)\n", (int)sizeof(c));
printf("Size of an int: %d byte(s)\n", (int)sizeof(i));
printf("Size of a long int: %d byte(s)\n", (int)sizeof(m));
printf("Size of a long long int: %d byte(s)\n", (int)sizeof(p));
printf("Size of a float: %d byte(s)\n", (int)sizeof(h));
return (0);
}
