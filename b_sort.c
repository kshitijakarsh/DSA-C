#include <stdio.h>

int main()
{
    int arr[5] = {7,3,9,12,11};
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<=5-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int swap;
                swap = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = swap;
            }
        }
    }
    printf("Sorted Array : ");
    for(int i = 1 ; i <= 5 ; i++)
    {
        printf("%d, ", arr[i]);
    }
}