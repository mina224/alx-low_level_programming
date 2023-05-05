#include <unistd.h>

/**
 * _putchar writes the character c to stdout
 * @c: Character to print
 * Return: 1 (Success) and -1 if it fails
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
