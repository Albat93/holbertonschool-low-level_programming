#include "main.h"

/**
 * print_alphabet : print all letters of alphabet.
 * Print_alphabet in lowercase using _putchar.
 * with new line.
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
