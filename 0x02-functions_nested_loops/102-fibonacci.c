#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i;
long int prev;
long int curr;
long int next;

prev = 1;
curr = 2;
printf("%ld, %ld", prev, curr);
for (i = 3; i <= 50; i++)
{
next = prev + curr;
printf(", %ld", next);
prev = curr;
curr = next;
}
printf("\n");
return (0);
}
