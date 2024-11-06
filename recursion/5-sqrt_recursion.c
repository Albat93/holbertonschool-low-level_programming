#include "main.h"
/**
 * sqrt_helper - function to perform recursive search
 * @n: number check
 * @low: search in lower half
 * @high: search in upper half
 * Return: found square root
 */

int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int mid_squared = mid * mid;

	if (mid_squared == n)
	{
		return (mid);
	}
	else if (mid_squared < n)
	{
		return (sqrt_helper(n, mid + 1, high));
	}
	else
	{
		return (sqrt_helper(n, low, mid - 1));
	}
}
/**
 * _sqrt_recursion - find the natural square root
 * @n: number check
 * Return: return -1 for negative numbers
 */

int _sqrt_recursion(int n)
{
	{
		if (n < 0)
		{
			return (-1);
		}
		return (sqrt_helper(n, 0, n));
	}
}
