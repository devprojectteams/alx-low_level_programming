#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* free_grid - free memory dynamically allocated
* @grid: pointer to 2-D array
* @row: row of the array
*
* Created by: Jonah Jockthan
* cc: 23rd July, 2022
*/

void free_grid(int **grid, int row)
{
int i;

for (i = 0; i < row; i++)
free(grid[i]);
free(grid);
}
