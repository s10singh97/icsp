#include<stdio.h>

struct student
{
    char name[20];
    int s_id;
    int clss;  //class
};
struct student s[10];
int n, i;

int main()
{
    char ch;
    void input();
    void check();
    void display();
    input();
    display();
    printf("Do you want to edit any enrtry (y/n) : ");
    scanf(" %c", &ch);
    if(ch == 'y' || ch == 'Y')
    {
        check();
        printf("New details are :\n");
        display();
    }
    else
        printf("Thank you!!\nExiting Now!!");
    return 0;
}

void input()
{
    printf("Enter the number of entries you want to make (less than 10) : ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        printf("\nEnter the details of student %d", i + 1);
        printf("\nEnter name : ");
        scanf("%s", s[i].name);
        printf("Enter student id : ");
        scanf("%d", &(s[i].s_id));
        printf("Enter Class : ");
        scanf("%d", &(s[i].clss));
    }
}

void display()
{
    printf("You Entered : ");
    for(i = 0; i < n; i++)
    {
        printf("\nDetails of %dth student", i + 1);
        printf("\nName : %s\nID : %d\nClass : %d\n", s[i].name, s[i].s_id, s[i].clss);
    }
}

void check()
{
    int m;
    printf("Enter the student id of the student whose details has to be changed : ");
    scanf("%d", &m);
    for(i = 0; i < n; i++)
    {
        if(s[i].s_id == m)
        {
            printf("\nEnter name : ");
            scanf("%s", s[i].name);
            printf("Enter student id : ");
            scanf("%d", &(s[i].s_id));
            printf("Enter Class : ");
            scanf("%d", &(s[i].clss));
        }
    }
}