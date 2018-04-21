#include<stdio.h>

struct student
{
    char name[20];
    int s_id;
};

int main()
{
    int n, i;
    struct student s[10], *p;
    p = s;
    printf("Enter the number of entries you want to make (less than 10) : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the name of student %d : ", i + 1);
        scanf("%s", (p + i) -> name);
        printf("Enter the student id : ");
        scanf("%d", &((p + i) -> s_id));
    }
    for(i = 0; i < n; i++)
    {
        printf("\nYou entered : \nName : %s\nID : %d\n", (p + i) -> name, (p + i) -> s_id);
    }
    return 0;
}