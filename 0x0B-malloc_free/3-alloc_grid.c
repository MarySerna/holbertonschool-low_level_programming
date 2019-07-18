#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @height : parametro
* @width : parametro
*
* Return:0
*/
int **alloc_grid(int width, int height)
{
	int w, h;
	int **c;
if (width <= 0 || height <= 0)
	return (NULL);
	c = (int **)malloc(sizeof(int *) * height);
	if (c == NULL)
	return (NULL);
	for (w = 0; w < height; w++)
			{
	c[w] = (int *)malloc(sizeof(int) * width);
		if (c[w] == NULL)
		{
			for (h = 0; h < w; h++)
			free(c[h]);
			free(c);
		return (NULL);
		}
	for (h = 0; h < width; h++)
	{
		c[w][h] = 0;
	}
			}
	return (c);
}
