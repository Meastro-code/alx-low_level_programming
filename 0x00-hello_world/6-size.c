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
printf("Size of a char:%d\n",(int)sizeof(c));
printf("Size of an int:%d\n",(int)sizeof(i));
printf("Size of a long int:%d\n",(int)sizeof(m));
printf("Size of a long long int:%d\n",(int)sizeof(p));
printf("Size of a float:%d\n",(int)sizeof(h));
return (0);
}
