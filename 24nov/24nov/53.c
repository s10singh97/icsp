#include<stdio.h>

int main()
{
    int a[10], i, j;
    printf("Enter 10 elements\n");
    for(i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < 10 - 1; i++)
    {
        for(j = 0; j < 10 - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Second largest element is : %d\n", a[8]);
    return 0;
}