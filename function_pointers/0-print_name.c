#include <stdlib.h>
/**
 * print_name - print a name
 * @name: name of the person
 * @f: function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
