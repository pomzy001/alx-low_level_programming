#include "main.h"

/**
 * get_bit - a function that get the value of a bit
 * at an index in a dec number
 * @n: number to search
 * @index: index of a bit
 *
 * Return: this return  value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
