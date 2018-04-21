#include<stdio.h>

int main()
{
    char a[] = "abcd";
    char b[] = "abcd";
    if(a == b)
        printf("Equal\n");
    else
        printf("Unequal\n");
    return 0;
}