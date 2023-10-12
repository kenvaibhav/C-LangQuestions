//Write a c prog to accept input from user and cal resistance, current and voltage

#include<stdio.h>

void main(){
    // First we will take input from user to find current
    float i, v, r;
    printf("Enter voltage and resistance value: ");
    scanf("%f%f",&v,&r);
    printf("Values of current is : %f",v/r );

    // Take input for calculating resistance
    printf("\nEnter voltage and current: ");
    scanf("%f%f",&v,&i);
    printf("Value of resistance is : %f", v/i);
    // Take input for calculating voltage
    printf("\nEnter current and resistance:");
    scanf("%f%f",&i,&r);
    printf("Value of voltage is : %f",i*r );

}