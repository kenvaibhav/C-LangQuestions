//Write a C prog to calculate the area of equilateral triangle
#include<stdio.h>
#include<math.h>

void main(){
    // Formula  area = 1* side * ( pow((side*side) - side*side/4), 1/2) / 2
    float side;
    printf("Enter the side of an equilateral triangle: ");
    scanf("%f",&side);
    // cal area of equilateral triangle
    float areaOfEqui;
    //areaOfEqui =  1* side *  (pow(3*side*side/4, 0.5)) * 0.5;
    areaOfEqui = pow(3.0,0.5)*side*side/4;
    printf("The area of equilateral triangle is : %f", areaOfEqui);
}