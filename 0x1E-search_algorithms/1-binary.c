#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
    int mid, left = 0, right = (int)size - 1;

    while (left <= right && array)
    {
        mid = (left + right) / 2;
        printf("Search in array: ");
        print(array, left, right);
        if (array[mid] == value)
            return mid;
        else if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

void print(int *array, int left, int right)
{
    int idx;

    if (array)
    {
        for (idx = left; idx <= right; idx++)
        {
            if (idx != right)
                printf("%d, ", array[idx]);
            else
                printf("%d\n", array[idx]);
        }
    }
}
