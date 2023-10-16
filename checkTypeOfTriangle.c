//Write a C prog to check whether triangle is isoscales, equilateral, scalene
#include<stdio.h>

void main(){
    //Take input
    int a, b, c;
    printf("Enter the sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    // check
    if(a == b && b == c){
        printf("It is an Equilateral Triangle.");
    }else if( (a == b && a != c) || (b == c && c != a) || (a == c && c != b) ){
        printf("It is an Isoscales Triangle. ");
    }else{
        printf(" It is a Scalene Triangle. ");
    }
}