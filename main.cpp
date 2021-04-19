/*This program is mandated for storing the details of 5 Employee
using structures. */

#include <stdio.h>
#include <stdlib.h>
struct Emp
{
    char name[30];
    int Employ_ID;
    int Experience_in_years;
    float salary;
} ;


int main()
{
    printf("This Program is mandated for writing and storing the \n");
    printf("Information of 5 employee.");
    int i = 0;
    struct Emp e[5];

    for(i = 0;i < 5; i++)
    {
        printf("\nEnter the Details of Emp. number  %d\n",i+1);
        printf("Name = ");
        scanf("%s",&e[i].name);
        printf("\nEmploy id = ");
        scanf("%d",&e[i].Employ_ID);
        printf("\nExperience in years = ");
        scanf("%d",&e[i].Experience_in_years);
        printf("\nSalary = ");
        scanf("%f",&e[i].salary);
    }

    return 0;
}
