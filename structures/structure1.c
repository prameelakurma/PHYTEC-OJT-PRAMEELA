
#include<stdio.h>

struct employee
{
    char name[100];
    float salary;
    int id;
};

int main()
{
    struct employee e;

    printf("Enter employee name, salary, and ID separated by '-' : ");
    scanf("%[^-]-%f-%d", e.name, &e.salary, &e.id);

    printf("\nEmployee details:\n");
    printf("Name: %s\n", e.name);
    printf("Salary: %f\n", e.salary);
    printf("ID: %d\n", e.id);

    return 0;
}

