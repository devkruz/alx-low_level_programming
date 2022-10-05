#include <string.h>
#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2 dimensional array of integers
* @width: The width of the grid
* @height: The height of the grid
*
* Return: The pointer to the 2d array
*/


int **alloc_grid(int width, int height)
{
	int i, j;
	int **height_ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	height_ptr = (int **)malloc(sizeof(int *) * height);

	if (!height_ptr)
	{
		free(height_ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		int *width_ptr;

		width_ptr = (int *)malloc(sizeof(int) * width);

		if (!width_ptr)
		{
			free(height_ptr);
			free(width_ptr);
			return (NULL);
		}

		height_ptr[i] = width_ptr;
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			height_ptr[i][j] = 0;
	}

	return (height_ptr);

}
