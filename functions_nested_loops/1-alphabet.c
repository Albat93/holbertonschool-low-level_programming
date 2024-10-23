#include "main.h"

/**
 *  Print_alphabet in lowercase using _putchar.
 *  with new line.
 * print_alphabet - print letters of the alphabet.
*/

void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
