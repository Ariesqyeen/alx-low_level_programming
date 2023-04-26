#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number
 * Return: Last digit value of a number
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (ld < 0)
	{
		ld = ld * -1;
	}
	_putchar(ld + '0');

	return (ld);
}
