#include <stdio.h>
/**
* main - A program that prints alphabets in lowercase
* Description: Prints lowercase letters
* Return: 0 if program is successfully executed
*/
int main(void)
{
	int i = 'a';

	while (i <= 'z')
{
	putchar(i);
	i++;
}
	putchar('\n');
	return (0);
}
