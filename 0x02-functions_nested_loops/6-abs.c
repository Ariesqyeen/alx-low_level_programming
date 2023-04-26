#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @c: This is the number to be computed
 * Return: Zero or the absolute value of an integer
 */
int _abs(int c)
{
	if (c < 0)
	{
	int _abs_val;

	_abs_val = c * -1;

	return (_abs_val);
	}
	return (c);
}
