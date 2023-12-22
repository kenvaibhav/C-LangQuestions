// Write a program to reverse the string
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char ch[20];
    printf("\nEnter the String : ");
    gets(ch);
    //find length manually
    int len = 0;
    for(int i=0 ; ch[i] != '\0'; i++){
        len++;
    }
    //finding length using inbuilt function
    int j = strlen(ch)-1;

    //swap the elements till half of the array for revrsing 
    for(int i=0; i<strlen(ch)/2; i++){
        int temp = ch[i];
        ch[i] = ch[j];
        ch[j] = temp;
        j--;
    }
    //print the string
    printf("%s\n",ch);
    for(int i=0; i<strlen(ch); i++){
        printf("%c",ch[i]);
    }
}