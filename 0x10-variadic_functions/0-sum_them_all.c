#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - function that returns the sum of all its parameters.
* @n: integers to sum.
* Return: sum of all the unknown arguments.
* If n == 0, return 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i;

	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
