//Write a C prog to reverse first and last digit of 5 digit number
#include<stdio.h>

void main(){
    // Take input
    int a, temp, temp2;
    printf("Enter any 5 digit number: ");
    scanf("%d",&a);
    temp = a;
    temp2 = a;
    // output
    printf("Output is: ");
    int b = 1000;
    for(int i = 0; i<5 ; i++){
        if(i == 0 || i == 4){
            printf("%d",temp2%10);
        }else{
            temp = a;
            temp = temp/b;
            printf("%d",temp%10);
            b = b/10;
        }
        temp2 = temp2/10;
    }
}