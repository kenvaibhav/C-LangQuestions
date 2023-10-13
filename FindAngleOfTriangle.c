// Write a prog to find the third angle of triangle using two angles given by user
#include<stdio.h>

void main(){
    int first, second;
    printf("Enter the values of first and second angle of triangle: ");
    scanf("%d%d",&first,&second);
    printf("Value of third angle will be : %d ", 180-first-second);
}