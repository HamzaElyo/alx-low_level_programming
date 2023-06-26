#include "main.h"

/**
 * swap_int - function that swaps two numbers
 * @a: first number to swap
 * @b second number to swap
 * Reurn: void
 */
void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
