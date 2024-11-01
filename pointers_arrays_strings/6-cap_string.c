#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @char *: character string to be converted to uppercase
 * @str: string to test
 * Return: 0
 */
char *cap_string(char *str) /*Pointer to an array named str */
{
	int i, n;
	char comp[13] = {' ', '\t', '\n', ',', ';', '.',
'!', '?', '"', '(', ')', '{', '}'};
	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		for (n = 0; n < 13; n++)
		{
			if (str[i] == comp[n])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}
		return (str);
}
