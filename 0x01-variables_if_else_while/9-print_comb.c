#include <stdio.h>
/**
 * main - print all possible combination
 * of single digit number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
		putchar(',');
		putchae(' ');
		}
	}
	putchar('\n');
	return (0);
}
