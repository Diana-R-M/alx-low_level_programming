#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dim int arrays
 * @width: width value
 * @height: height value
 * Return: 2 dim. array *
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (w = 0; w < height; w++)
	{
		a[w] = malloc(sizeof(int) * width);

		if (a[w] == NULL)
		{
			while (w >= 0)
			w--;
			free(a[w]);

			free(a);
			return (NULL);
		}
		h = 0;
		while (h < width)
		{
		h++;
		a[w][h] = 0;
		}
	}
	return (a);
}
