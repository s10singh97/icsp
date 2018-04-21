#include<stdio.h>

struct student
{
    char name[20];
    int stu_id;
    int clss;
};

struct teacher
{
    char name[20];
    int t_id;
    float salary;
};

struct school
{
    struct student s;
    struct teacher t;
};
struct school sc;


int main()
{
    void input();
    void output();
    input();
    output();
    return 0;
}

void input()
{
    printf("Enter the details of the student\n");
    printf("Enter name : ");
    scanf("%s", sc.s.name);
    printf("Enter student id : ");
    scanf("%d", &(sc.s.stu_id));
    printf("Enter class : ");
    scanf("%d", &(sc.s.clss));
    printf("\nEnter the details of the teacher\n");
    printf("Enter name : ");
    scanf("%s", sc.t.name);
    printf("Enter teacher id : ");
    scanf("%d", &(sc.t.t_id));
    printf("Enter the salary : ");
    scanf("%f", &(sc.t.salary));
}

void output()
{
    printf("The details entered by you are :\nSTUDENT\nName : %s\nID : %d\nClass : %d", sc.s.name, sc.s.stu_id, sc.s.clss);
    printf("\n\nTEACHER :\nName : %s\nID : %d\nSalary : %f\n\n", sc.t.name, sc.t.t_id, sc.t.salary);
}