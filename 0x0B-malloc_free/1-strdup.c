#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer
 * @str:cstring copied
 * Return: a string
 */
char *_strdup(char *str)
{
char *s;
unsigned long int i, j;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
s = malloc(i + 1);
if (s == NULL)
return (NULL);
for (j = 0; j < i ; j++)
s[j] = str[j];
return (s);
}
