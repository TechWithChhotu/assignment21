// Write a function to take input employee data from the user. [ Refer structure from
// question 1 ]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    double salary;
}emp;//emp is a variable

int main(){
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    fflush(stdin);
    printf("Enter employee Name: ");
    fgets(emp.name, 20, stdin);
    printf("Enter employee salary: ");
    scanf("%lf", &emp.salary);
    printf("successfully input");

    return 0;
}