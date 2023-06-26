#include "main.h"
/**
 * _strlen - return the lenght of a string
 * @s: string targeted
 * Return: lenght of the string
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;
return (inc);
}
