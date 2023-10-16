// Write a C prog to check whether a triangle is valid or not
#include<stdio.h>

void main(){
    float side1, side2, side3;
    printf("Enter sides of triangle: ");
    scanf("%f%f%f",&side1,&side2,&side3);
    //check
    if(side1+side2 > side3){
        printf("Yes the given sides can make a valid triangle.");
    }else{
        printf("No it is not a tiangle");
    }
}