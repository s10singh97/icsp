#include<stdio.h>

int main()
{
    int a[10], i, n;
    printf("Enter no. of elements you want to enter (less than 10)\n");
    scanf("%d", &n);
    printf("Enter the elements : \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("You entered : \n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}