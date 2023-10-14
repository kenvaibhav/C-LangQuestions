// check whether the year is leap year or not
#include<stdio.h>

void main(){
    int year;
    printf("Enter any year you want to check : ");
    scanf("%d",&year);

    //Finding whether it is leap year or not
    if(year%4 == 0){
        printf("Yes %d is leap year",year);
    }else{
        printf("No %d is not a leap year",year);
    }
}