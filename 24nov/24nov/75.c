#include<stdio.h>
#include<string.h>

int main()
{
    char s[70];
    int i, j, temp;
    printf("Enter a string\n");
    scanf("%s", s);
    i = 0;
    j = strlen(s) - 1;
    while(i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("%s", s);
    return 0;
}