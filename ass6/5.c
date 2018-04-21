#include<stdio.h>

int sum(int a[]);
float avg(int a[]);
int prod(int a[]);
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
    int s = sum(n);
    float av = avg(n);
    int p = prod(n);
    printf("The sum of the entered numbers is %d\n", s);
    printf("The average of the entered numbers is %f\n", av);
    printf("The product of the entered numbers is %d\n", p);
    return 0;
}

int sum(int a[])
{
    int s = 0;
    for(int j = i - 1; j >= 0; j--)
    {
        s += a[j];
    }
    return s;
}

float avg(int a[])
{
    int s = 0;
    float av = 0;
    for(int j = i - 1; j >= 0; j--)
    {
        s += a[j];
    }
    av = (float)s/i;
    return av;
}

int prod(int a[])
{
    int p = 1;
    for(int j = i - 1; j >= 0; j--)
    {
        p *= a[j];
    }
    return p;
}