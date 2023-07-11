#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function that concatinates to strings
 * @s1: first string;
 * @s2: second string
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
int i = strlen(s1), j = strlen(s2), k;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
s = malloc(i + j + 1);
if (s == NULL)
return (NULL);
for (k = 0; k < i; k++)
s[k] =  s1[k];
for (k = 0; k < j; k++)
s[i + k] = s2[k];
return (s);
}
