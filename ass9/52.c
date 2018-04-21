#include<stdio.h>

int main()
{
    int a[10], i, k;
    printf("Enter 10 elements\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    int s = a[0];
    for(i = 0; i < 10; i++)
    {
        if(a[i] < s)
        {
            s = a[i];
            k = i;
        }
    }
    printf("The smallest element is %d and is at position %d\n", s, k + 1);
    return 0;
}