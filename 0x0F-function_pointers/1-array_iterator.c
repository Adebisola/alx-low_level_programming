#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator - executes each function given as a
* parameter on each element of an array.
* @size: size of the array.
* @array: pointer to the array.
* @action: pointer to the function you need to use(function pointer).
* Return: void.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
