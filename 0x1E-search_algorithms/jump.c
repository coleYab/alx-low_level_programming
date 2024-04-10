#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int jump_search(int *array, int size, int value)
{
    int idx, m = 3;
    // Lets test with jumping m units first
    for (idx = 0; idx < size; idx += 3)
    {
        if (array[idx] == value)
            return (idx);
        else if (array[idx] > value)
            break;
    }

    for (int o_val = idx - m; o_val < idx && o_val < size; o_val++)
        if (array[o_val] == value)
            return (o_val);
    return (-1);
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int idx = jump_search(array, sizeof(array) / sizeof(int), 6);

    printf("idx: %d <==> val: %d", idx, array[idx]);

    return (0);
}
