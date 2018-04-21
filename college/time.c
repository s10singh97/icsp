#include<stdio.h>

int main()
{
    int h, m, s;
    printf("Enter time in format HH:MM:SS\n");
    scanf("%02d:%02d:%02d", &h, &m, &s);
    printf("Entered time is %02d:%02d:%02d\n", h, m, s);
    return 0;
}