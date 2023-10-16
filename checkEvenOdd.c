//Write a C prog to check whether a num is even or odd
#include<stdio.h>

void main(){
    int num;
    printf("Enter a num: ");
    scanf("%d",&num);
    //check
    if(num%2 == 0){
        printf("%d is even number.",num);
    }else{
        printf("%d is odd number.",num);
    }
}