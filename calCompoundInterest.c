// Write a C prog to calculate compound interest
#include<stdio.h>
#include<math.h>

void main(){
    //Compound Interest = P(1 + r/100) to power t
    // P, r, t i.e principal amount, rate of interest, and tenure in years
    // Note : r is not in percentage
    float p, r;
    int t;
    printf("Enter Principal amount: ");
    scanf("%f",&p);
    printf("Enter rate of interest: ");
    scanf("%f",&r);
    printf("Enter tenure in years: ");
    scanf("%d",&t);
    // Cal compound interest
    float cI = p*pow((1 + (r/100)),t) - p;
    printf("Compound interest is: %f",cI);
}