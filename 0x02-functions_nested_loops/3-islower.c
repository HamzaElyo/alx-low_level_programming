#include "main.h"
/**
 * main - checks if a letter is lower case
 * Return: Always 0
 */
int _islower(int c)
{
if ( c > 96 && c < 123 )
return (1);
else
return (0);
_putchar('\n');
}