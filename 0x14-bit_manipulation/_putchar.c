#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that writes char c to stout
 * @c: the Char to be printed
 *
 * Return: On sucess 1, On error -1
 * and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
