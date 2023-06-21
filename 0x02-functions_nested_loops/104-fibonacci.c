#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int prev1;
unsigned long int prev2;
unsigned long int curr1;
unsigned long int curr2;
unsigned long int next1;
unsigned long int next2;

prev1 = 1;
prev2 = 0;
curr1 = 2;
curr2 = 0;
printf("%lu, %lu", prev1, curr1);
for (i = 3; i <= 98; i++)
{
if (curr2 == 0 && prev2 == 0)
{
next1 = prev1 + curr1;
printf(", %lu", next1);
}
else
{
next1 = (prev1 + curr1) % 1000000000;
next2 = prev2 + curr2 + (prev1 + curr1) / 1000000000;
printf(", %lu%09lu", next2, next1);
}
prev1 = curr1;
prev2 = curr2;
curr1 = next1;
curr2 = next2;
}
printf("\n");
return (0);
}
