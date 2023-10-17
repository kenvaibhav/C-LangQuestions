//Write a C prog to check whether a number is magic number or not 
// magic number is number whose digits sum and that sum reverse multiplied with sum will be 
// original number e.g 1458 , sum = 1+4+5+8 = 18 , reverse = 81, multiplication = 18*81 = 1458
#include<stdio.h>

void main(){
    //take input
    int Num;
    printf("Please enter a num: ");
    scanf("%d",&Num);
    // find sum of digits
    int sum = 0;
    int temp = Num;
    while(temp > 0){
        sum = sum + temp%10;
        temp = temp/10;
    }
    //find how many digits sum have
    temp = sum;
    int i = 1;
    while(temp>0){
        temp = temp / 10;
        i = i*10;
    }
    //find reverse digits of sum 
    int revDigit = 0;
    temp = sum;
    int b = i/10;
    while(temp>0){
        int a = temp%10;
        revDigit = revDigit + a*b;
        b = b/10;
        temp = temp/10;
    }
    // Now check
    if((revDigit*sum) == Num){
        printf("Yes, the %d is Magic Number",Num);
    }
}