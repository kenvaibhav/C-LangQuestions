// Write a c prog to find max bet three numbers

#include<stdio.h>

void main(){
    int a, b, c;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Enter Third number: ");
    scanf("%d",&c);
    
    // Max bet three numbers
    if(a>b && a>c){
        printf("%d Number is greater\n",a);
    }else if(b>a && b>c){
        printf("%d Number is greater\n",b);
    }else{
        printf("%d Number is greater\n",c);
    }
}