#include "main.h"
/**
 * _islower - checks if a letter is lower case
 * @c: The character in ASCII code
 * Return: 1 for lowercase caracter. 0 for the rest.
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
_putchar('\n');
}
