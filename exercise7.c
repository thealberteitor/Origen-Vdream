# Write a C program to find the position of a target value within a array using Interpolation search.

#include <stdio.h>

int interpolation_Search(int array_nums[], int array_size, int n)
{
    int lower_pos = 0, higher_pos = array_size - 1;
    while (lower_pos <= higher_pos && n >= array_nums[lower_pos] && n <= array_nums[higher_pos])
    {
        int n_pos = lower_pos + ((n - array_nums[lower_pos]) * (higher_pos - lower_pos)) / (array_nums[higher_pos] - array_nums[lower_pos]);
        if (n > array_nums[n_pos])
            lower_pos = n_pos + 1;
        else if (n < array_nums[n_pos])
            higher_pos = n_pos - 1;
        else  
            return n_pos;
    }
    return -1;
}

int main()
{
    int n;
    int array_nums[] = {0, 10, 20, 20, 30, 50, 70, 75, 82, 92, 115, 123, 141, 153, 160, 170};
    int array_size = sizeof(array_nums) / sizeof(array_nums[0]);
    printf("Original Array: ");
    for (int i = 0; i < array_size; i++) printf("%d ", array_nums[i]);   
    printf("\nInput a number to search: ");
    scanf("%d", &n); 
    int index = interpolation_Search(array_nums, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d", index);
    else
        printf("\nElement not found..!");
    return 0;
}
