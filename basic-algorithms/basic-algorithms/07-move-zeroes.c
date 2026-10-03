#include <stdio.h>

void moveZeroes(int nums[], int size)
{
    int position = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] != 0)
        {
            nums[position] = nums[i];
            position++;
        }
    }

    while (position < size)
    {
        nums[position] = 0;
        position++;
    }
}

void printArray(int nums[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", nums[i]);

    printf("\n");
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};
    moveZeroes(nums1, 5);
    printf("Test 1 Result: ");
    printArray(nums1, 5);

    int nums2[] = {1, 0, 2, 0, 3};
    moveZeroes(nums2, 5);
    printf("Test 2 Result: ");
    printArray(nums2, 5);

    return 0;
}