//Write a C prog to reverse any 3 digit number
#include<stdio.h>

void main(){
    // take input
    int a;
    printf("Enter a 3 digit number: ");
    scanf("%d",&a);
    //print output
    printf("Output is : ");
    while(a != 0){
        int rem = a%10;
        printf("%d",rem);
        a = a/10;
    }
}