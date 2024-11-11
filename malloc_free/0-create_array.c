#include "main.h"
#include <stdlib.h>

/**
 * create_array create an array of char,
 * and initializes it with specific char
 * @size: size of the char
 * @c: char specified
 * @return: 0 success
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size ==0)
		{
			return (NULL);
		}
	buffer = malloc(size * sizeof(c));

	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
