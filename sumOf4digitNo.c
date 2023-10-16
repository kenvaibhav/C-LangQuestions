//Write a C prog to find sum of all digits of a 4 digit number
#include<stdio.h>

void main(){
    // take input
    int a;
    printf("Enter any four digit number: ");
    scanf("%d",&a);
    //output
    int sum = 0;
    while( a!=0){
        sum = sum + (a%10);
        a = a/10;
    }
    printf("The sum is: %d",sum);
}