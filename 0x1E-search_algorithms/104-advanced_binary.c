#include <stdio.h>

int advanced_binary(int *array, size_t size, int value)
{
    int left = 0, right = (int)size - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        printf("Searching in array: ");
        print(array, left, right);
        if (array[mid] == value)
        {
            while (mid >= 0 && array[mid] == value)
                mid -= 1;
            return ((mid == 0 && array[0] == value) ? (&array) : (
                (array[mid] == value) ? (&array[mid]) : (&array[mid - 1])
        ) );
        }
        else if (array[mid] > value)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return (-1);
}

void print(int *array, int left, int right)
{
    if (left == right)
    {
        printf("%d\n", array[left]);
        return;
    }
    printf("%d, ", array[left]);
    return print(array, left + 1, right);
}

int main(void)
{
    int array[] = {
        0, 1, 2, 5, 5, 6, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 8));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, 999));
    return (EXIT_SUCCESS);
}
