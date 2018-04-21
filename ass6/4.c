#include<stdio.h>
int check(int a[], int num);
int main()
{
    int n[6], num;
    printf("Enter six numbers in the array\n");
    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &n[i]);
    }
    printf("Enter a number to check whether it is present in the entered array or not\n");
    scanf("%d", &num);
    int f = check(n, num);
    if(f == 1)
        printf("%d is present in the entered array\n", num);
    else
        printf("%d is not present in the entered array\n", num);
    return 0;
}

int check(int a[], int num)
{
    int flag = 0;
    for(int i = 0; i < 6; i++)
    {
        if(a[i] == num)
            flag = 1;
    }
    return flag;
}