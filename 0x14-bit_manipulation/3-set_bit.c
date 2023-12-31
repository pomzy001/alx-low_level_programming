#include "main.h"

/**
 * set_bit - a function that sets a bit at a given index say to 1
 * @n: pointer to the numb to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for Success, and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
