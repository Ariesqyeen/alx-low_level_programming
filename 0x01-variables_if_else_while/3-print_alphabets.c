#include <stdio.h>
/**
 * main - Prints the alpabets in lowercase and uppercase
 * Description: Alphabets in lowercase and uppercase
 * followed by newline
 * Return: Always return 0 if successful
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
	for (i = 'A'; i <= 'Z'; i++)
{
	putchar(i);
}
	putchar('\n');
	return (0);
}
