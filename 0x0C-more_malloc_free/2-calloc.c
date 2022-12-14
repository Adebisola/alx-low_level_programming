#include "main.h"
#include <stdlib.h>

/**
* *_calloc - allocates mémoire for an array, using malloc.
* @nmemb: number of elements in an array.
* @size: size of bytes.
* Return: if nmemb or size is 0, returns NULL.
* if malloc fails, returns NULL,
* otherwise, pointer to the allocated memory.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;

	return (p);
}
