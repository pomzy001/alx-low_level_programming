#include <stdio.h>
#include <string.h>
/**
 * main - prints alphabets in
 * in reverse ordee
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch ='z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
