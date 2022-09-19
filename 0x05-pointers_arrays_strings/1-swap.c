#include "main.h"

/**
* swap_int - entry point
* Description: swap_int function swaps
* the values of two integers.
* @a: first integer.
* @b: second integer.
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
