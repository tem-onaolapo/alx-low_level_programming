#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	short int n = 0;
	while (n <= 9)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');

	return (0);
}
