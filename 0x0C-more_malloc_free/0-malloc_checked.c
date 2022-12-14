#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates
* memory using malloc.
* @b: amount of bytes to allocate.
* Return: if malloc fails, status value is equal to 98.
* else return pointer to allocated memory.
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}


