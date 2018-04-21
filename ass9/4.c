#include<stdio.h>

struct distance
{
    int kms, meters;
};

int main()
{
    int i;
    struct distance s[2];
    int sum1 = 0, sum2 = 0, d1 = 0, d2 = 0;
    for(i = 0; i < 2; i++)
    {
        printf("\nEnter distance in km : ");
        scanf("%d", &s[i].kms);
        printf("Enter distance in meters : ");
        scanf("%d", &s[i].meters);
    }

    for(i = 0; i < 2; i++)
    {
        sum1 += s[i].meters;
        sum2 += s[i].kms;
        if(sum1 >= 1000)
        {
            sum2++;
            sum1 -= 1000;
        }
    }

    i = 0;
    if(s[0].kms >= s[1].kms)
    {
        d1 = s[0].kms - s[1].kms;
        d2 = s[0].meters - s[1].meters;
        if(d2 < 0)
        {
            d2 = d2 + 1000;
            d1--;
        }
    }
    else
    {
        d1 = s[1].kms - s[1].kms;
        d2 = s[0].meters - s[1].meters;
        if(d2 < 0)
        {
            d2 = d2 + 1000;
            d1--;
        }
    }

    printf("\nThe added distance is : %d kms %d meteres\n", sum2, sum1);
    printf("\nThe subtracted distance is : %d kms %d meters\n", d1, d2);
    return 0;
}