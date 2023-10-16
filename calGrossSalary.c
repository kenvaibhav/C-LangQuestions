//Write a C prog to calculate a gross salary of an employee
// input : no of working days and per day salary
// output : gross salary 
// Basic salary = no. of working days* per day salary,
// Gross salary = Basic salary + DA + HRA , DA = 20% of basic Salary, HRA = 40% of basic Salary

#include<stdio.h>

void main(){
    //Take input
    int workingDays, perDaySalary;
    printf("Enter no of working days and per day salary : ");
    scanf("%d%d",&workingDays,&perDaySalary);
    //printOutput
    float Da, hra, ba;
    ba = workingDays * perDaySalary;
    Da = 0.2* ba;
    hra = 0.4 * ba;
    printf("The Gross Salary is : %f", ba+Da+hra);
}