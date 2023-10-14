//Write a c prog to find to find whether a number is divisible by 5 and 11 or not

#include<stdio.h>

void main(){
    int c;
    printf("Enter a Number : ");
    scanf("%d",&c);
    // finding it is divisible by 5 and 11 or not
    if(c%5 == 0 && c%11 == 0){
        printf("%d is divisible by both 5 and 11",c);
    }else{
        printf("%d is not divisible by both 5 and 11",c);
    }
}