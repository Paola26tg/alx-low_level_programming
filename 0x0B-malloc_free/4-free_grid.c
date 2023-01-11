#include "main.h"
#include <stdlib.h>
/**
 * free_grid - that frees two dimensional grid
 * @grid: grid created previously
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free[i];
	free[grid];
}
