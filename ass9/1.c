#include<stdio.h>

struct employee
{
    int enp_id;
    char name[20];
    float salary;
    char desig[10];
    int expr;
};

int main()
{
    struct employee e;
    printf("Size of employee is : %lu\n", sizeof(e));
    return 0;
}
