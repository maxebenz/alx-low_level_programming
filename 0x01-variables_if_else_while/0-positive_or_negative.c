#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* The progarm returns values */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if( n >= 0); {
		printf("%d positive\n", n);
}

	if( n = 0); {
		printf("%d zero\n", n);
}

	if( n <= 0); {
		printf("%d negative\n", n);

}

	return (0);
}
