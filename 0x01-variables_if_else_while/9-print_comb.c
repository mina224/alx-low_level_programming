#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; ++letter)
	{
		putchar(letter);
		if (letter != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
