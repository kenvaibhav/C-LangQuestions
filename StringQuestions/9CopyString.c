//WAP to copy the elements in string to the another string
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    //take input from the user
    char str1[20];
    printf("\nEnter the string : ");
    gets(str1);

    //create a new copy
    char str2[20]; //we can directly copy using pointer
    //here we will use loop
    for(int i=0; str1[i] != '\0' ; i++){
        str2[i] = str1[i];
    }
    //adding null character at last
    str2[strlen(str1)] = '\0';
    printf("\n%s\n%s",str1,str2);

}