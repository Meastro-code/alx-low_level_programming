#include <stdio.h>
/**
 * main - prints own name
 * @argc: first parameter
 * @argv: second parameter
 *
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
if (argc == 0)
{
return (1);
}
printf("%s\n", argv[0]);
return (0);
}
