// write a program to enter a set of array and then find out if the array has a number and then print the number's index


#include <stdio.h>
int main()
{
    int arr[5] = {10,9,1,5,12};
    int search;
    int found = 0;
    printf("Enter the number you want to search for in the array: ");
    scanf("%d", &search);
    for(int i = 0; i<5; i++)
    {
        if(search == arr[i])
        {
            printf("The number is present at : %d ", i+1);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("The said number is not found");
    }
}