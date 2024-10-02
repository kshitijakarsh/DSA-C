// write a program to input an array of numbers, which you'll display and then ask the user to input a number whose index he wants to know

#include <stdio.h>
int main()
{
    int n;
    int found = 0;
    printf("Enter the number of characters you want to enter : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array entered is : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d, ", arr[i]);
    }
    int search;
    printf("\n Enter the number whose index you want to know : ");
    scanf("%d", &search);
    for(int i = 0; i<n; i++)
    {
        if(search == arr[i])
        {
            printf("The index of the number is : %d", i+1);
            found = 1;
            break;
        }
    }
    if(found==0)
    {
        printf("The said element is not in the array");
    }
}