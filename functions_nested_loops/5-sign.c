#include "main.h"

/**
 * print_sign - print sign of a number
 * @n: number tested
 * return:  - print + if greater, - if less, 0 if 0.
 */

 int print_sign(int n)
 {
	 if (n > 0)
	 {
		 putchar(43);
	 }
	 else if (n < 0)
	 {
		 putchar(45);
	 }
	 else if (n == 0)
	 {
		 putchar(48);
	 }
	 return (0);

 }
