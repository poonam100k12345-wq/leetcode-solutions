#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    printf("Test 1 Result: %d\n", binarySearch(arr1, 5, 7));

    int arr2[] = {2, 4, 6, 8, 10};
    printf("Test 2 Result: %d\n", binarySearch(arr2, 5, 5));

    return 0;
}