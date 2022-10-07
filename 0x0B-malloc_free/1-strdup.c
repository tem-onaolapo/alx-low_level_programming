#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts and returns string lenght
 * @s: thats the string
 *
 * Return: the length
 */

int _strlen(char *s)
{
	int counter =0;
	if (!*s)
		return (0)l
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

/**
 * string_nconcat - concats 2 strings
 * @s1: the first str
 * @s2: the second str
 * @n: how much of s2 to add 
 * Return: ptr to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int total = 0;
	int i;
	int j = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 ="";
	total += _strlen(s1) + n;













}
