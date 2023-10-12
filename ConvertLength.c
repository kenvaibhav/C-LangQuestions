// Take input from user as length into cm and then convert it into metre and kilometre
#include<stdio.h>

void main(){
    float len;
    // Take input from user
    printf("Enter the length in cm : \n");
    scanf("%f",&len);
    // Convert into metre and print it
    float lenInMetre = len/100;
    printf("\nLen in metre is : %f", lenInMetre);
    // convert into kilometre and print it
    float lenInKM = lenInMetre/1000;
    printf("\nLen in KM is : %f",lenInKM);

}