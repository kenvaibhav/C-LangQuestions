// Write a  C prog to find shopkeeper is having profit or loss
#include<stdio.h>
void main(){
    float cost, sellPrice;
    printf("Enter cost price of product : ");
    scanf("%f",&cost);
    printf("Enter sellPrice of product : ");
    scanf("%f",&sellPrice);
    // Check the shopkeeper is having profit or loss
    if(cost < sellPrice){
        printf("Shopkeeper is making profit ");
    }else if(sellPrice < cost){
        printf("Shopkeeper is making loss ");
    }else{
        printf("Shopkeeper is making no profit no loss");
    }
}