#include <stdio.h>
#include "print_2D.h"

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {2, 3, 4, 5}, {3, 4, 5, 6}};
    int *ptr[3] = {arr[0], arr[1], arr[2]};

    print_2D(ptr, 3, 4);

    return 0;
}