//Write a C prog to solve the algebric equation (a+b)square = a**2 + 2*a*b + b**2
#include<stdio.h>

void main(){
    //take input
    int a, b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    //find left hand side
    int lhs = (a+b)*(a+b);
    //find right hand side
    int rhs = a*a + 2*a*b + b*b;
    //check
    if(lhs == rhs){
        printf("Yes, the equation is correct for %d,%d",a,b);
    }else{
        printf("No the equation is not correct for %d,%d",a,b);
    }
}