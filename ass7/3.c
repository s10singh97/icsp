#include<stdio.h>

int main()
{
    char s[70];
    printf("Enter a string\n");
    scanf("%s", s);
    char *p, cc = 0, cv = 0;
    p = s;
    while(*p != '\0')
    {
        if((*p == 'a') || (*p == 'e') || (*p == 'i') || (*p == 'o') || (*p == 'u'))
            cv++;
        else
            cc++;
        p++;
    }
    printf("Count :\nVowels = %d\nConsonants = %d\n", cv, cc);
    return 0;
}