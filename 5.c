//Write a function to sort employees according to their salaries [ refer structure from
// question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    double salary;
}emp[10];
void sort_according_salary();
void display_after_sorting();
struct employee input(int );
int main(){
    int i;
    for (i = 0; i < 10; i++){
        emp[i] = input(i);
    }
    sort_according_salary();
    display_after_sorting();
    return 0;
}
struct employee input(int i){
    struct employee temp;
    printf("\nEnter %d employee infomation: ", i + 1);
    printf("\nID: ");
    scanf("%d", &temp.id);
    fflush(stdin);
    printf("Name: ");
    fgets(temp.name, 20, stdin);
    printf("Salary: ");
    scanf("%lf", &temp.salary);
    return temp;
}
void sort_according_salary(){
    int tempI, i, j;
    char tempN[20];
    double tempS;
    for (i = 0; i < 10; i++){
        for (j = i+1; j < 10; j++){
            if(emp[i].salary>emp[j].salary){//structure variable swapping logic
                tempS = emp[j].salary;
                strcpy(tempN, emp[j].name);
                tempI = emp[j].id;

                emp[j].salary = emp[i].salary;
                strcpy(emp[j].name, emp[i].name);
                emp[j].id = emp[i].id;

                emp[i].salary = tempS;
                strcpy(emp[i].name, tempN);
                emp[i].id = tempI;
            }
        }
    }
}
void display_after_sorting(){
    int i;
    printf("\n-:after sorting according to salary:-\n");
    for (i = 0; i < 10; i++){
        printf("\n%dth employee information:\n\tID = %d \n\tName = %s\tSalary = %.2lf\n", i+1, emp[i].id, emp[i].name, emp[i].salary);
    }
}