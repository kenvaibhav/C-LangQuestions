//Write a C prog to reverse 2nd and 4th digit of 5 digit number e.g input 12345 output 14325
#include<stdio.h>

void main(){
    //take input
    int a;
    printf("Enter any 5 digit number: ");
    scanf("%d",&a);
    //output
    printf("Output is : ");
    int temp = a, temp2 = a, b = 10000, c = 10;
    for(int i = 0; i<5 ; i++){
        if(i == 0 || i == 4){
            temp = a;
            temp = temp/b;
            printf("%d",temp%10);
            b = 1;
        }else{
            temp2 = a;
            temp2 = temp2/c;
            printf("%d",temp2%10);
            c = c*10;
        }
    }
}