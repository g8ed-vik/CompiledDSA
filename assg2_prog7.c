#include <stdio.h>
 
void segegrate0and1(int array[], int size)
{
    int left = 0, right = size-1;
 
    while (left < right)
    {
        while (array[left] == 0 && left < right)
            left++;
        while (array[right] == 1 && left < right)
            right--;
        if (left < right)
        {
            array[left] = 0;
            array[right] = 1;
            left++;
            right--;
        }
    }
}
 
int assg2prog7()
{
    int arr[] = {0, 1, 0, 1, 1, 0};
    int array_size = 6, i = 0;
 
    segegrate0and1(arr, array_size);
    printf("segregated array is ");
    for (i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    getchar();
    return 0;
}