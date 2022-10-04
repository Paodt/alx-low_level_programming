#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - returns a pointer to a two dimensional array
 * @width: width
 * @height: height
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int p, o;

	if (width < 1 || height < 1)
		return (NULL);
	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		gridout[p] = malloc(width * sizeof(int));
		if (gridout[p] == NULL)
		{
			for (p--; p >= 0; p--)
				free(gridout[p]);
			free(gridout);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
		for (o = 0; o < width; o++)
			gridout[p][o] = 0;
	return (gridout);
}
