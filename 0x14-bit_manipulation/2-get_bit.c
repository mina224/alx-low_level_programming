#include "main.h"

/**
 * get_bit - Gets the value of a bit at a defined index
 * @n: The bit
 * @index: The index to get the value at - indices start at 0
 * Return: incase it brings an error - -1.
 *         Otherwise The value of bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	while ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
