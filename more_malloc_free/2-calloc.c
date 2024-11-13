#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: elements of the array
 * @size: size of each elements
 * Return: void*
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;

	return ((void *)ptr);
}
