#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: 0 if executed successfully
 */
int main(void)
{
	int i, x, a;

	for (i = 48; i < 58; i++)
	{
		for (x = 49; x < 58; x++)
		{
			for (a = 50; a < 58; a++)
			{
				if (a > x && x > i)
				{
					putchar(i);
					putchar(x);
					putchar(a);

					if (i != 55 || x != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

