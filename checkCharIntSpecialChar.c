// Write a  C prog to check whether a character is alphabet, int or any special character
#include<stdio.h>

void main(){
    char a;
    printf("Enter your character : ");
    scanf("%c",&a);
    //check it
    int b = a;
    if((b>=65 && b<=90) || (b>=97 && b<=122)){
        printf("Entered character is alphabet");
    }else if(b>=48 && b<= 57){
        printf("Entered character is integer");
    }else{
        printf("Entered character is special character");
    }
}