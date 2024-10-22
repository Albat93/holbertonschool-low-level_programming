#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)

{

char lowercaseAlphabets;
char uppercaseAlphabets;

for (lowercaseAlphabets = 'a'; lowercaseAlphabets <= 'z'; lowercaseAlphabets++)
{
putchar(lowercaseAlphabets);
}
for (uppercaseAlphabets = 'A'; uppercaseAlphabets <= 'Z'; uppercaseAlphabets++)
{
putchar(uppercaseAlphabets);
}
{
putchar('\n');
}
return (0);
}
