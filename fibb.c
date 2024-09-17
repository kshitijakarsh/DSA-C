#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;
    int next;
    int n;
    printf("Enter the length of Fibb series : ");
    scanf("%d", &n);
    printf("%d %d ", first, second);
    for(int i = 2; i<=n; i++){
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
    }
}