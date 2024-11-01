#include "main.h"

/**
 *
 *
 *
 */

int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] >= 48 && s[i] <= 57; i++)
	{
		if (s[i] < 48 && s[i] > 57)
		{
			return (0);
		}
		else
		{
			return (*s);
		}
	}
	return (0);
}
