#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @a: int passed to function
 * Return : void
 */
void print_to_98(int a)
{
int i, j;
if (a <= 98)
{
for (i = a ; i <= 98 ; i++)
if (i < 98)
printf("%d, ", i);
else if (i == 98)
printf ("%d\n", i);
}
else
for (j = a ; j >= 98 ; j--)
if (j > 98)
printf("%d, ", j);
else if (j == 98)
printf("%d\n", j);
}
