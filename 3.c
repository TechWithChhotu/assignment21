// Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    double salary;
}emp;//emp is a variable
void display();//this function print employee information
struct employee input(){ // this function input employee information & return structure
    struct employee b;
    printf("Enter employee ID: ");
    scanf("%d", &b.id);
    fflush(stdin);
    printf("Enter employee Name: ");
    fgets(b.name, 20, stdin);
    printf("Enter employee salary: ");
    scanf("%lf", &b.salary);
    return b;
}
int main(){
    emp= input();
    display();
    return 0;
}
void display(){
    printf("\n-:Enployee information:-\n");
    printf("ID: %d",emp.id);
    printf("\nName: %s",emp.name);
    printf("Salary: %.2lf\n\n", emp.salary);
}