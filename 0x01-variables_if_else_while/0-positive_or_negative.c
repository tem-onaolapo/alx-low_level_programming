#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
* main - Assigns a random number to n
* the if statement prints if the value is -,+ or 0
* Return: ALways 0 (Successful)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/**
	* main - Assigns a random number to n
	* the if statement prints if the value is -,+ or 0
	* Return: ALways 0 (Successful)
	*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
