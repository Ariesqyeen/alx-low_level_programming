#include <stdio.h>
/**
 * main - Prints singles digits
 * Description: Prints all single digit numbers
 * of base 10 starting from 0, followed by a new line
 * Return: Always return 0 when program is successfully executed
 */
int main(void)
{
	int i = '0';

	for (i = 0; i <= 9; i++)
{
	printf("%d", i);
}
	printf("\n");
	return (0);
}
