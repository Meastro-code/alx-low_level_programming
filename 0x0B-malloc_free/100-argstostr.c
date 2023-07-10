#include <stdlib.h>

int _strlen(char *s);

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
    int i, j;
    int len = 0;
    char *str;

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }

    for (i = 0; i < ac; i++)
    {
        len += _strlen(av[i]) + 1;
    }

    str = malloc(len * sizeof(char));
    if (str == NULL)
    {
        return NULL;
    }

    for (i = 0, j = 0; i < ac; i++)
    {
        int k;

        for (k = 0; av[i][k]; k++, j++)
        {
            str[j] = av[i][k];
        }

        str[j] = '\n';
        j++;
    }

    str[j] = '\0';

    return str;
}

/**
 * _strlen - returns the length of a string.
 * @s: string.
 *
 * Return: length of s.
 */
int _strlen(char *s)
{
    int len;

    for (len = 0; s[len]; len++)
        ;

    return (len);
}
