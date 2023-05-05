#include "main.h"

/**
 * binary_to_uint - Converts binary number to an unsigned int.
 * @b: a pointer to a string of 1 and 0 characters.
 *
 * Return: 0 if b = NULL or contains chars != 0 or 1 OR the converted number.
 */

unsigned int binary_to_uint(const char *T)
{
	int i;
	unsigned int nbr;

	nbr = 0;
	if (!T)
		return (0);
	for (i = 0; T[i] != '\0'; i++)
	{
		if (T[i] != '0' && T[i] != '1')
			return (0);
	}
	for (i = 0; T[i] != '\0'; i++)
	{
		nbr <<= 1;
		if (T[i] == '1')
			nbr += 1;
	}
	return (nbr);
}
