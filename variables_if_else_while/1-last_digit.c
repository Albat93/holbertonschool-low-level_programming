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
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
/* your code goes there */
if (n > 5)
{
printf("last digit of %d is %d and is greater than 5\n", last_digit, n > 5);
}
else if (n < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", last_digit, n < 6);
}
else (n = 0)
{
printf("Last digit of %d and is 0\n", last_digit == 0, n == 0);
}
return (0);
}
