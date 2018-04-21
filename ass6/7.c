#include<stdio.h>

void replace(int a[]);
int i;

int main()
{
    int n[10], num;
    printf("Enter the numbers of elements you want to insert in the array (less than 10)\n");
    scanf("%d", &num);
    printf("Now enter %d elements in the array\n", num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &n[i]);
    }
    replace(n);
    printf("The modified array is :\n");
    for(int j = 0; j < i; j++)
    {
        printf("%d\t", n[j]);
    }
    printf("\n");
    return 0;
}

void replace(int a[])
{
    for(int j = 0; j < i; j++)
    {
        if((a[j] % 2) == 0)
            a[j] = 0;
        else
            a[j] = 1;
    }
}