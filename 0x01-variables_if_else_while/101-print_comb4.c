#include <stdio.h>
#include <stdlib.h>
/**
 * main - write combo of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y, z;
for (x = '0' ; x <= '7' ; x++)
{
for (y = x + 1 ; y <= '8' ; y++)
{
for (z = y + 1 ; z <= '9' ; z++)
{
putchar(x);
putchar(y);
putchar(z);
if (x != '7' || y != '8' || z != '9')
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
