//write a C prog to find roots of quadratic equation
#include<stdio.h>
#include<math.h>
void main(){
    //Take input
    float a, b, c;
    printf("Enter values of a , b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    //find roots
    float root1, root2;
    root1 = (-b + pow(b*b-4.0*a*c,0.5)) / (2*a);
    root2 = (-b - pow(b*b-4.0*a*c,0.5)) / (2*a);
    //Print Output
    printf("The roots are: %f, %f",root1,root2);
}