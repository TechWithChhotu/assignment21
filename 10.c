// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student
#include<stdio.h>
struct students
{
    int roll_number;
    char name[30];
    float chem_marks;
    float maths_marks;
    float phy_marks;
}st[5];
void input();
void output();
int main(){
    input();
    output();
    return 0;
}
void input(){
    for (int i = 0; i < 5; i++)
    {
        printf("\n-:Enter %dth student:-\n", i + 1);
        printf("Roll number: ");
        scanf("%d",&st[i].roll_number);
        fflush(stdin);
        printf("Name: ");
        fgets(st[i].name, 20, stdin);
        printf("Chemistry marks: ");
        scanf("%f", &st[i].chem_marks);
        printf("Mathematics marks: ");
        scanf("%f", &st[i].maths_marks);
        printf("Physics marks: ");
        scanf("%f", &st[i].phy_marks);
    }
    
}
void output(){
    float per;
    for (int i = 0; i < 5; i++)
    {
        per = (st[i].chem_marks + st[i].maths_marks + st[i].phy_marks) / 3.0;
        printf("\nroll number = %d %s \t\t achive %.2f %% marks",st[i].roll_number, st[i].name, per);
    }
    
}