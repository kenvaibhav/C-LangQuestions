//WAP to count the no of occurences of the letters in the string
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
    char a[20];
    gets(a);
    //lets sort it first
    int temp = strlen(a);
    for(int i=0; i<strlen(a)-1; i++){

        for(int j=1; j<temp ; j++ ){
            if(a[j-1]>a[j]){
                int temp2 = a[j-1];
                a[j-1] = a[j];
                a[j] = temp2;
            }
        }
        temp--;

    }
    printf("\nSorted string is %s",a);

    // now count the no of occurences
    int num = a[0], count=1;
    for(int i=1; i<strlen(a); i++){
        
        if(num == a[i]){
            count++;
        }else{
            printf("\n%c occur %d times",a[i-1],count);
            count = 1;
            num = a[i];
        }
    }

}