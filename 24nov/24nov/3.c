#include<stdio.h>

int main()
{
    int num[6] = {2, 4, 12 ,5, 45, 5};
    printf("%d\n", ++num);
    printf("%d\n", num + 1);
    printf("%d\n", num++);
    printf("%d\n", num^2);
    return 0;
}