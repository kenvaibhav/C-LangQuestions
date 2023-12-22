//WAP to count no of words in a given string
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    //take input string
    char a[30];
    gets(a);
    //count the no of words
    int count = 1;
    printf("The length of the string is : %d",strlen(a));
    for(int i = 0; i<strlen(a) ; i++){

        if( (a[i-1] <= 90 && a[i-1] >= 65) || (a[i-1] >= 97 && a[i-1] <= 122) ){
            
            if(a[i] == 32){

                if( (a[i+1] <= 90 && a[i+1] >= 65) || (a[i+1] >= 97 && a[i+1] <= 122) ){
                    count++;
                }
            }
        }
    }
    printf("\nThe no of words in the string %s is %d",a,count);
}