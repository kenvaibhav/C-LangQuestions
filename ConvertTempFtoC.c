// Write a c prog to enter temp in faharanite and convert into degree celsius
#include<stdio.h>

void main(){
    float fahrenheit;
    // Take input from user 
    printf("Enter the value for fahrenheit : ");
    scanf("%f",&fahrenheit);
    // Convert into celsius
    printf("\n Value in Celsius will be : %f", (fahrenheit-32)*5/9);
}