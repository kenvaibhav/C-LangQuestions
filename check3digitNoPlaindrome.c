//Write a C prog to check whether a 3 digit number is palindrome or not
#include<stdio.h>

void main(){
    // take input
    int num;
    printf("Enter any 3 digit number: ");
    scanf("%d",&num);
    // print output
    if(num%10 == (num/100%10)){
        printf("Yes, it is a palindrome");
    }else{
        printf("No, it is not a palindrome");
    }
}