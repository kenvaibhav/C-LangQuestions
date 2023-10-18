//Write a C prog to accept the height of a person in centimeters and categorize the person
//according to their height
#include<stdio.h>

void main(){
    //take input
    float centi ;
    printf("Enter a height of a person in centimeters : ");
    scanf("%f",&centi);
    //categorize the person according to height
    (centi >= 165) ? printf("The person is Taller") : 
    (centi >= 150 && centi < 165) ? printf("The person is Average Height") : 
    printf("The person is Dwarf "); 
}