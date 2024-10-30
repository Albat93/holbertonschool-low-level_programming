#include "main.h"
#include "2-strlen.c"
#include "3-puts.c"
/**
 * puts2 - print every other character of a string
 * @str: character tested
 */


void puts2(char *str)
{
	int i = 0;


	for (i = 0; str[i] != '\0' ; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
