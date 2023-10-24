// Write a C prog to check whether an employee is permeanent or temporary
// if years of service is greater than 2 year and salry is above 20000 and employee
// performance score is greater than 75% then it is permanent employee, otherwise it is not
// permanent employee
#include<stdio.h>

void main(){
    //take input
    int current_year, join_year, service_year, salary , emp_score;
    printf("Enter current year :");
    scanf("%d",&current_year);
    
    printf("Enter year of joining : ");
    scanf("%d",&join_year);
    
    printf(" Years of service is : %d",current_year-join_year);
    
    printf("Enter Salary: ");
    scanf("%d",&salary);
    
    printf("Enter Employee performance score in percentage: ");
    scanf("%d",&emp_score);
    // check
    service_year = current_year-join_year;

    if(service_year > 2 && salary > 20000 && emp_score > 75){
        printf("Employee is permanent.");
    }else{
        printf("Employee is temporary.");
    }

    
}