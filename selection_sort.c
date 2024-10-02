#include <stdio.h>

int main()
{

    // initialise the arra
    int arr[5] = {7,12,9,11,3};
    int i, j;
    int min_index;
    for(i = 0; i<5; i++)
    {
        min_index = i;
        for(j = i+1; j<5; j++)
        {
            if(arr[min_index]>arr[j])
            {
                min_index = j;
            }     
        }
        if(min_index != i)
        {
            int swap = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = swap;
        }
    }
    printf("Sorted Array : ");
    for(int i = 0; i<5; i++)
    {
        printf("%d, ", arr[i]);
    }
}