//  Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student
{
    int roll_number;
    char name[30];
    char course_name[20];
    double marks;
}st[10];
void input(int );
void display();
int main(){
    int i;
    for ( i = 0; i < 10; i++)
    {
        input(i);
    }
        display();

    return 0;
}
void input(int i){
    printf("\n-:Enter %dth student information:- \n",i+1);
    printf("Roll number: ");
    scanf("%d", &st[i].roll_number);
    printf("Name: ");
    fflush(stdin);
    fgets(st[i].name, 30, stdin);
    printf("Course name: ");
    fgets(st[i].course_name, 20, stdin);
    printf("Marks: ");
    scanf("%lf", &st[i].marks);
}
void display(){
   for (int  i = 0; i < 10; i++)
   {
    printf("\n-:%dth student information:-\n",i+1);
    printf("Roll number: %d", st[i].roll_number);
    printf("\nName: %s", st[i].name);
    printf("Course name: %s", st[i].course_name);
    printf("Marks: %.2lf", st[i].marks);
   }
   
}