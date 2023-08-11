#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - Determines if a number is positive or negative or zero
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf(" %d positive\n",n);
	}
	else if (n==0)
	{
		printf("%d zero\n",n);
	}
	else
		printf("%d negative\n",n);
	return (0);
}
