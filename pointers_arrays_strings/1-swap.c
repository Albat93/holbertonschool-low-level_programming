#include "main.h"
/**
 * swap_int - swap value of two integers
 * @a: is a variable with value
 * @b: is a variable with value
 */

void swap_int(int *a, int *b)
{
	int tmp;
		tmp = *a;
		*a = *b;
		*b = tmp;
}
