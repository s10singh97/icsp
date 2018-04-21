#include<stdio.h>

int lar(int a[]);
int small(int a[]);
void both(int a[]);
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
    int c;
    do
    {
        int result;
        printf("Enter the number from the menu to execute the below mentioned tasks\n");
        printf("1. Largest Element\n2. Smallest Element\n3. Both at Once\n4. Exit\n");
        scanf("%d", &c);
        switch(c)
        {
            case 1 : result = lar(n);
                     printf("The Largest element is %d\n", result);
                     break;

            case 2 : result = small(n);
                     printf("The Smallest element is %d\n", result);
                     break;

            case 3 : both(n);
                     break;

            case 4 : c = 4;
                     break;

            default : printf("Please enter the correct chioce\n");
                      break;
        }

    }while(c != 4);
    return 0;
}

int lar(int a[])
{
    int temp = a[0];
    for(int j = i - 1; j > 0; j--)
    {
        if(a[j] > temp)
            temp = a[j];
    }
    return temp;
}

int small(int a[])
{
    int temp = a[0];
    for(int j = i - 1; j > 0; j--)
    {
        if(a[j] < temp)
            temp = a[j];
    }
    return temp;
}

void both(int a[])
{
    int max = a[0];
    for(int j = i - 1; j > 0; j--)
    {
        if(a[j] > max)
            max = a[j];
    }
    printf("The Largest element is %d\n", max);
    int min = a[0];
    for(int j = i - 1; j > 0; j--)
    {
        if(a[j] < min)
            min = a[j];
    }
    printf("The Smallest element is %d\n", min);
}