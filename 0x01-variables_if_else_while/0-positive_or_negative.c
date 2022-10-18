#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - print if the number is positive, zero or negative
 *
 * Description: The progarm prints programming is positive, zero or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%i positive\n", n);
}

	else if (n == 0)
	{
		printf("%i zero\n", n);
}

	else if (n < 0)
	{
		printf("%i negative\n", n);

}

	return (0);
}
