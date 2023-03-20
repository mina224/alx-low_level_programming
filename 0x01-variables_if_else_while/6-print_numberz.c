#include <stdio.h>
/**
 * main -enter point
 *
 * Return: always 0
 */
int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; ++letter)
		putchar(letter);
	putchar('\n');
	return (0);
}
