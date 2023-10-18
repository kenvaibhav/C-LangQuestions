//Write a C prog to find gross salary of an employee
// Basic salary <= 10000 then HRA = 20% , DA = 80%
// Basic salary <= 20000 then HRA = 25% , DA = 90%
// Basic salary > 20000 then HRA = 30% , DA = 95%
#include<stdio.h>

void main(){
    float salary;
    printf("Enter the basic salary : ");
    scanf("%f",&salary);
    //Calculate total salary
    (salary <= 10000) ? printf("Total salary will be : %f",salary*2) :
    (salary <= 20000) ? printf(" Total Salary will be : %f",salary*1.15) : 
    printf("Total Salary will be : %f",salary*1.25);
}