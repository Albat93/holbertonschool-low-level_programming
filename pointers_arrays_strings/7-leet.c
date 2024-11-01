#include "main.h"

/**
 * leet - encode string to 1337
 * @str: string checked
 * Return: str
 */


char *leet(char *str)
{
	int i, j;
	char a[10] = { 'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char n[10] = { '4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j];
			}
		}
	}
	return (str);
}
