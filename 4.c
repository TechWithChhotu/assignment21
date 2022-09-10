// Write a function to find the highest salary employee from a given array of 10
// employees. [ Refer structure from question 1]
#include<stdio.h>
void highestsalary();
struct employee
{
    int id;
    char name[20];
    double salary;
}emp[10];//emp is a array name
struct employee input(int );
int main(){
    int i;
    
    for ( i = 0; i < 10; i++)
    {
        emp[i] = input(i);
    }
    highestsalary();
    return 0;
}
void highestsalary(){
    int i, H_salary,j;
    for (i = 0; i < 10;i++){
        if(emp[i].salary<emp[i+1].salary){
            H_salary = emp[i + 1].salary;
            j = i+1;
        }
    }
    printf("Highest salary employee Id: %d\nname: %ssalary: %.2lf", emp[j].id, emp[j].name, emp[j].salary);
}
struct employee input(int i){
    struct employee emp_d;
    printf("\n-:Enter %d employee information:-\n",i+1);
    printf("ID: ");
    scanf("%d", &emp_d.id);
    fflush(stdin);
    printf("name: ");
    fgets(emp_d.name, 20, stdin);
    printf("salary: ");
    scanf("%lf", &emp_d.salary);
    return emp_d;
}