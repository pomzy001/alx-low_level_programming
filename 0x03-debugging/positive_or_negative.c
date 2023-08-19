#include "main.h"

/**
 * positive_or_negative -  print positive or negative value
 *
 * int i - is an integer
 */
void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is Zero\n", i);
	else
		printf("%d is negative\n", i);
}
