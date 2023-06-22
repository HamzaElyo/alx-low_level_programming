#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks the upper case of a character
 * @c : is the charachter
 * Return: 1 if uppercase. 0 otherwise
 */
int _isupper(int c)
{
if ((c < 91) && (c > 64))
{
return(1);
} else
{
return(0);
}
}
