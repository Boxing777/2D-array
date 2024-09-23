#include <stdio.h>
#include "print_2D.h"

void print_2D(int **arr, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}