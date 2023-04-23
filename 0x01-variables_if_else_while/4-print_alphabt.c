#include <stdio.h>
/**
 * main - Prints alphabets in lowercase
 * Description: Prints alphabets in lowercase
 * follwed by new line except q and e
 * Return: 0 if the program was successfully executed
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
