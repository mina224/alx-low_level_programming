#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print numbers from 00 to 99
 * Return: Zero value
 */

int main(void)
{
	int n;

	for (n = 0; n <= 98; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
