// Write a C prog to calculate Discount and final and print it in the output
#include<stdio.h>

void main(){
    //Take input Bill
    float bill;
    printf("Enter the bill of customer: ");
    scanf("%f",&bill);
    //Calculate the discount according to the bill
    float discount;
    if(bill<=1000){
        discount = 0.05*bill;
    }else if(bill > 1000 && bill <= 2500){
        discount = 0.06*bill;
    }else if(bill > 2500 && bill <= 10000){
        discount = 0.08*bill;
    }else{
        discount = 0.1*bill;
    }
    //print total discount and final bill
    float final_bill = bill - discount;
    printf("Discount : %f \nFinal Bill : %f",discount,final_bill);

}