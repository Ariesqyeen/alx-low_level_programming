#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: check for this character
 * Return:1 if lowercase or uppercase letter, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
