#include "main.h"
/**
 * _isalpha - checks if is a letter
 * @c: the character in ASCII code
 * Return: 1 if is a letter 0 if not
 */
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && c < 91))
return (1);
else
return (0);
_putchar('\n');
}
