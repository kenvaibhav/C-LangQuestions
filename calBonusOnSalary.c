//Write a C prog to calculate bonus on salary 
// Salary < 10,000  bonus = 10% on salary
// 10,000 < Salary < 30,000 then bonus = 7% on salary
// salary > 30,000 then bonus = 5% on salary
#include<stdio.h>

void main(){
    //Take input
    float salary;
    printf("Enter Salary of an Employee: ");
    scanf("%f",&salary);
    // output
    if(salary<=10000){
        printf("The bonus on salary %f is : %f",salary,salary*0.1);
    }else if(salary > 10000 && salary <30000){
        printf("The bonus on salary %f is : %f",salary,salary*0.07);
    }else{
        printf("The bonus on salary %f is : %f",salary,salary*0.05);
    }
}