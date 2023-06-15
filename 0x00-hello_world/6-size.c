#include <stdio.h>

/**
 * main - Entry point
 *
 * Retur: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int m;
long long int p;
float h;
printf("Size of a char:%lu\n",(unsignedint)sizeof(c));
printf("Size of an int:%lu\n",(unsignedint)sizeof(i));
printf("Size of a long int:%lu\n",(unsignedint)sizeof(m));
printf("Size of a long long int:%lu\n",(unsignedint)sizeof(p));
printf("Size of a float:%lu\n",(unsignedint)sizeof(h));
return (0);
}
