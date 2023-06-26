#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for the 101-crackme program
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[100];
    int index = 0;
    int sum = 0;
    int diff;

    srand(time(NULL));
    while (sum < 2772 - 127)
    {
        password[index] = rand() % 127;
        if (password[index] >= 33)
        {
            sum += password[index];
            index++;
        }
    }
    diff = 2772 - sum;
    password[index] = diff;
    printf("%s\n", password);
    return (0);
}
