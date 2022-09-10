// Write a function to sort employees according to their names [refer structure from
// question 1]
#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[20];
    double salary;
}emp[3];
struct employee input(int );
void sort_according_name();
void display_after_sorting();
int main(){
    int i;
    for (i = 0; i < 3; i++)
    {
        emp[i] = input(i);
    }
    sort_according_name();
    display_after_sorting();

    return 0;
}
struct employee input(int i){
    struct employee temp;
    printf("\n-:Enter %d employee inforamation:-\n",i+1);
    printf("\nID: ");
    scanf("%d", &temp.id);
    fflush(stdin);
    printf("Name: ");
    fgets(temp.name, 20, stdin);
    printf("Salary: ");
    scanf("%lf", &temp.salary);
    return temp;
}
void sort_according_name(){
    int i, j, tempI;
    double tempS;
    char tempN[20];
    for (i = 0; i < 3;  i++){
        for (j = i + 1; j < 3;  j++){
            if(strcmp(emp[i].name,emp[j].name)==1){
                tempI = emp[i].id;
                strcpy(tempN, emp[i].name);
                tempS = emp[i].salary;

                emp[i].id = emp[j].id;
                strcpy(emp[i].name, emp[j].name);
                emp[i].salary = emp[j].salary;

                emp[j].id = tempI;
                strcpy(emp[j].name, tempN);
                emp[j].salary = tempS;
            }
        }
    }
}
void display_after_sorting(){
    int i;
    printf("\n\n-:after sorting according to employee name:-\n");
    for (i = 0; i < 3;i++){
        printf("\n%dth: \n\t ID: %d\n\t Name: %s\tSalary: %.2lf",i+1, emp[i].id, emp[i].name, emp[i].salary);
    }
}