#include <stdio.h>
#include <stdlib.h>
/**
 * main - write all alphabtes
 * Return: Always 0 (Success)
 */
int main(void)
{
int x;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
if (x <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
