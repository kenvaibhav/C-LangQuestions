//Write a C prog to swap two numbers using third variable
#include<stdio.h>
void main(){
    int first, second;
    printf("Enter first and second num : ");
    scanf("%d%d",&first,&second);
    //swap it 
    int temp;
    temp = first;
    first = second;
    second = temp;
    printf("Now first num is %d and second num is %d",first,second);
}