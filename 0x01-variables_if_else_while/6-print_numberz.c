#include <stdio.h>
/**
 * main - Prints all single digit numbers
 * Description: Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: Always 0 when executed successfully
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
	putchar('0' + i);
}
	putchar('\n');
	return (0);
}
