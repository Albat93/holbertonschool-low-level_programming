#include "main.h"

int sqrt_helper(int n, int low, int high)
{
	int mid = (low + high) / 2;
	int mid_squared = mid * mid;

	if (mid_squared == n)
	{
		return mid;
	}
	else if (mid_squared < n)
	{
		return sqrt_helper(n, mid + 1, high);
	}
	else
	{
		return sqrt_helper(n, low, mid - 1);
	}
}
	int _sqrt_recursion(int n)
{
	{
		if (n < 0)
		{
			return -1;
		}
		return sqrt_helper(n, 0, n);
	}
}
