// write a program to take input from user in an array and then using binary search, find out a particular value which the user provides, do not forget to sort out the array



#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<=n-i-1; j++)
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
    printf("Sorted Array : \n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d, ", arr[i]);
    }
    int searchValue;
    printf("\n Enter the value you want to search : ");
    scanf("%d", &searchValue);


    int found = 0;
    for(int i = 0; i < n; i++)
    {
        if(searchValue == arr[i])
        {
            printf("The value %d is present at position %d\n", searchValue, i + 1);
            found = 1;
            break; 
        }
    }

    if (!found)
    {
        printf("The entered value is not present in the array\n");
    }
}