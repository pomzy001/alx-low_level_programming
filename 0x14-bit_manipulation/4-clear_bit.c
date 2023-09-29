#include "main.h"

/**
 * clear_bit - sets the val of a given bit to 0
 * @n: pointer to the next numb to change
 * @index: index of the bit to clear
 *
 * Return: On success 1, On failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
