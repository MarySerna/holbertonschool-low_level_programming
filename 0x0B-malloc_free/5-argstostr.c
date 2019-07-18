#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Number of arguments
 * @av: Arguments
 *
 * Return: Pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int m = 0;
	int n = 0;
	int size = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (m = 0; *(*(av + i) + m) != '\0'; m++)
			size++;
		size++;
	}
	size++;

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (m = 0; *(*(av + i) + m) != '\0'; m++)
		{
			*(p + n) = *(*(av + i) + m);
			n++;
		}
		*(p + n) = '\n';
		n++;
	}
	n++;
	*(p + n) = '\0';

	return (p);
}

