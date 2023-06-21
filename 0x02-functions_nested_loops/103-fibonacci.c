#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued Fibonacci terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int prev;
long int curr;
long int next;
long int sum;

prev = 1;
curr = 2;
sum = 0;
while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}
next = prev + curr;
prev = curr;
curr = next;
}
printf("%ld\n", sum);
return (0);
}
