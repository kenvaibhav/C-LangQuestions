// Write a C prog to cal simple interest 
#include<stdio.h>

void main(){
    // simple interest A = P(1+(r/100)*t) - p so for calculating simple interest we must have to take input
    // P, r, t i.e principal amount, rate of interest, and tenure in years
    float p, r;
    int t;
    printf("Enter Principal amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter tenure in years: ");
    scanf("%d",&t);
    // Cal simple interest
    float sI = p*(1 + (r/100)*t) - p;
    printf("Simple interest is: %f",sI);
}