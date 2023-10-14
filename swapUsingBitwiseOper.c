//Write a C prog to swap two numbers using bitwise variable
#include<stdio.h>
void main(){
    int first, second;
    printf("Enter first and second num : ");
    scanf("%d%d",&first,&second);
    //swap it 
    int temp;
    first = first^second;
    second = first^second;
    first = first^second;
    printf("Now first num is %d and second num is %d",first,second);
}