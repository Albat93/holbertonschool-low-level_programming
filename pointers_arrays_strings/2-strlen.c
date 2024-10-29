/**
 * _strlen - calc lenght of char
 * @i: char tested
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
