#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Check this number
 * Return: 1 if number is positive, -1 if number is negative or zero otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n > 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
