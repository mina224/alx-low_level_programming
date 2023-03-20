#include <stdio.h>
/**
 * main -this betty is annoying
 *
 * Return: she is annoying ohhhhh
 */
int main(void)
{
	char letter, Letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
		putchar(letter);
	for (Letter = 'A'; Letter <= 'Z'; ++Letter)
		putchar(Letter);
	putchar('\n');
	return (0);
}
