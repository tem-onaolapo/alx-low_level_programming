#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
	char letter = 'a';
	char bigLetter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (bigLetter <= 'Z')
	{
		putchar(bigLetter);
		bigLetter++;
	}
	putchar('\n');

	return (0);
}
