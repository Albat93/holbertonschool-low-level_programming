/**
 * _strlen - Calculate the length of a character string
 * @s: test the char
 * Return: lenght of the character
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
