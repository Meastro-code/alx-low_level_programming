#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        ;

    return (i);
}

void _puts(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        putchar(s[i]);
}

void _print_error(void)
{
    _puts("Error");
    putchar('\n');
    exit(98);
}

int _isdigit(char *s)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] < '0' || s[i] > '9')
            return (0);

    return (1);
}

int main(int argc, char **argv)
{
    int len1, len2, len_res, carry, n1, n2, res;
    int *result;
    int i, j;

    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
        _print_error();

    len1 = _strlen(argv[1]);
    len2 = _strlen(argv[2]);
    len_res = len1 + len2;
    result = calloc(len_res, sizeof(int));

    if (result == NULL)
        return (1);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = argv[1][i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = argv[2][j] - '0';
            res = n1 * n2 + result[i + j + 1] + carry;
            result[i + j + 1] = res % 10;
            carry = res / 10;
        }

        if (carry)
            result[i + j + 1] += carry;
    }

    for (i = 0; result[i] == 0 && i < len_res - 1; i++)
        ;

    for (; i < len_res; i++)
        putchar(result[i] + '0');

    putchar('\n');

    free(result);

    return (0);
}
