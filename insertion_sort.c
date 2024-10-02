#include <stdio.h>

int main()
{
    int arr[5] = {7,12,9,11,3};
    int i, j, swap;
    for(i = 0; i<5; i++)
    {
        for(j = 0; j<=i; j++)
        {
            if(arr[i]<arr[j])
            {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }
    printf("Sorted Array : ");
    for(int i = 0; i<5; i++)
    {
        printf("%d, ", arr[i]);
    }
}