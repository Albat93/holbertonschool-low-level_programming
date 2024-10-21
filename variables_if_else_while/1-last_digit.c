#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit  = n % 10;
/* your code goes there */
if ((n > last_digit) > 5)
{
printf("last digit of %d is %d and is greater than 5\n");
}
else if ((n != 0) < 6)
{
printf("Last digit of %d is less than 6 and not 0\n");
}
else ((n == last_digit) == 0)
}
printf("Last digit of %d and is 0");
}
return (0);
}
