//define a structure Employee with member variables id,name,salary.
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[20];
    float salary;
};
//write a function to take input employee data from user.
struct Employee inputEmployeeData() //take take input and return 
{
    struct Employee e;
    printf("Enter id, name and salary of an Employee");
    scanf("%d",&e.id);
    fflush(stdin);//brfore string input 
    fgets(e.name,20,stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f",&e.salary);
    return e;
}
//write a function to display employee data.
void displayEmployeeData(struct Employee e)
{
    printf("\n%d %s %f",e.id,e.name,e.salary);
}
//write a function to find highest salary employee from a given array of 10 employees.
struct Employee highestSalaryEmployee(struct Employee e[],int n)
{
    struct Employee maxSalaryEmployee;
    int i;
    maxSalaryEmployee=e[0];
    for(i=1;i<=n-1;i++)
    {
        if(maxSalaryEmployee.salary<e[i].salary)
            maxSalaryEmployee=e[i];
    }
    return maxSalaryEmployee;
}
//write a function to sort employees according to their salary.
void sortBySalary(struct Employee e[],int n)
{
    int r,i;
    struct Employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(e[i].salary>e[i+1].salary)
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
        }
    }
}
//write a function to sort employees according to their names.
void sortByName(struct Employee e[],int n)
{
    int r,i;
    struct Employee temp;
    for(r=1;r<n;r++)
    {
        for(i=0;i<=n-1-r;i++)
        {
            if(strcmp(e[i].name,e[i+1].name)>0)//>0 means dictionary order ke opposite order me
            {
                temp=e[i];
                e[i]=e[i+1];
                e[i+1]=temp;
            }
        }
    }
}