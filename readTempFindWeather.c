//Write a C prog to read temperature in centigrade and display a suitable message according to
//temperature state below
#include<stdio.h>

void main(){
    float temp;
    printf("Enter temp: ");
    scanf("%f",&temp);
    // check
    (temp < 0) ? printf(" Freezing Weather.") : 
    (temp >= 0 && temp < 10) ? printf(" Very cold weather.") :
    (temp >= 10 && temp < 20) ? printf(" Cold Weather.") : 
    (temp >= 20 && temp < 30) ? printf("Normal Temperature.") :
    (temp >= 30 && temp < 40) ? printf("Its Hot.") : printf("Its very Hot.");
}