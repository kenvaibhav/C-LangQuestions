// Write a c prog to find max bet two numbers

#include<stdio.h>

void main(){
    int a, b;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    
    // Max bet two numbers
    if(a>b){
        printf("%d Number is greater\n",a);
    }else{
        printf("%d Number is greater\n",b);
    }
}