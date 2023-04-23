#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Description: prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: 0 if program is successfully executed
 */
int main(void)
{
	char x = 'z';

	for (x = 'z'; x >= 'a'; x--)
{
	putchar(x);
}
	putchar('\n');
	return (0);
}
