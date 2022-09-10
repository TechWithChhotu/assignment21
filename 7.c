// . Write a program to calculate the difference between two time periods.
#include<stdio.h>
struct end
{
    int HH;
    char temp;
    int MM;
}second;
struct start
{
    int HH;
    char temp;
    int MM;
}first;
int main(){
    printf("\n\nEnter starting time(this formate HH : MM): ");
    scanf("%d : %d", &first.HH, &first.MM);
    printf("\nEnter ending time(this formate HH : MM): ");
     scanf("%d : %d", &second.HH, &second.MM);
    if(second.HH<first.HH)
        second.HH += 12;
    if(second.MM<first.MM){
        second.HH--;
        second.MM += 60;
    }

    printf("\n\tResult(HH : MM): %d : %d", second.HH - first.HH, second.MM - first.MM);
}