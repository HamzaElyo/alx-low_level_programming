#include "main.h"
/**
 * _puts - a fonction that orints a string followed by a new line
 * @str:the string to be printed
 * Return: void
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);
_putchar('\n');
}
