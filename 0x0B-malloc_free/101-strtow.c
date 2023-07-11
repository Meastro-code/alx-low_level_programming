#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * strtow - split string
 * @str: string
 *
 * Return: words
 */
char **strtow(char *str) {
int i = 0, j = 0, k = 0;
char **words = NULL;
if (str == NULL || str[0] == '\0')
return (NULL);
words = malloc(sizeof(char *) * (strlen(str) + 1));
if (words == NULL)
return (NULL);
while (str[i] != '\0') {
while (str[i] == ' ' && str[i] != '\0')
i++;
if (str[i] == '\0')
break;
j = i;
while (str[j] != ' ' && str[j] != '\0')
j++;
words[k] = malloc(sizeof(char) * (j - i + 1));
if (words[k] == NULL)
return (NULL);
strncpy(words[k], &str[i], j - i);
words[k][j - i] = '\0';
k++;
i = j;
}
words[k] = NULL;
return (words);
}
