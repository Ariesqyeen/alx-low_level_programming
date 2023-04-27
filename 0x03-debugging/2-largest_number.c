#include "main'h"
/**
 * largest_number - prints the largest of three integers.
 * @i: first integer
 * @j: second integer
 * @k: third integer
 * Return: largest number
 */
int largest_number(int i, int j, int k)
{
	int largest;

	if (i > j && i > k)
	{
		largest = i;
	}
	else if (k > j && k > i)
	{
		largest = k;
	}
	else 
	{
		largest = j;
	}
	return (largest);
}
	
