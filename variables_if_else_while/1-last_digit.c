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
int last_d;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_d = n % 10;
/* your code goes there */
if (n > 5)
{
printf("last digit of :%d is :%d and is greater than 5\n", last_d, n);
}
else if (n < 6)
{
printf("Last digit of :%d is :%d and is less than 6 and not 0\n", last_d, n);
}
else
{
printf("Last digit of :%d is :%d and is 0\n", n == 0, n);
}
return (0);
}
