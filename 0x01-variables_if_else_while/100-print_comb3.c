#include <stdio.h>
#include <stdlib.h>
/**
 * main - write combo of two numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, y;
for (x = '0' ; x <= '8' ; x++)
{
for (y = x+1 ; y <= '9'; y++) 
{
putchar(x);
 putchar(y);
if ( x != '8' || y != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
