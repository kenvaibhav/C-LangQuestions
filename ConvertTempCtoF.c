// Write a c prog to enter temp in celsius and convert into fahrenheit
#include<stdio.h>

void main(){
    float celsius;
    // Take input from user 
    printf("Enter the value of celsius : ");
    scanf("%f",&celsius);
    // Convert into fahrenheit
    printf("Value in fahrenheit will be : %f", (celsius*9/5)+32);
}