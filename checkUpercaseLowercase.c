//Write a C prog to find whether entered alphabet is in uppercase or lowercase
#include<stdio.h>

void main(){
    char c;
    printf("Enter alphabet: ");
    scanf("%c",&c);
    // Check Uppercase or lowercase letter
    int a = c;
    if(a>=65 && a<=90){
        printf("It is uppercase letter.");
    }else if(a>=97 && a<=122){
        printf("It is lowercase letter.");
    }else{
        printf("It is not a alphabet.");
    }
}