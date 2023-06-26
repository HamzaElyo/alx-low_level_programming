#include "main.h"
/**
 * print_rev - printd a char in reverse
 * @s: char to be printed
 * Return: void
 */
void print_rev(char *s)
{
int len = 0, index = 0;
len = _strlen(s);

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}
