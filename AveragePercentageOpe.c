// Write c prog to enter marks of 5 subjects out of 100 and cal total marks and percentage
#include<stdio.h>

void main(){
    int a, b, c, d, e;
    printf("Enter the marks of 5 Subjects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("Total Marks is : %d", a+b+c+d+e);
    printf("\n Avg of marks of student will be : %f", (a+b+c+d+e)/5);
    printf("\nPercentage of the student will be : %f", ((a+b+c+d+e)*100)/500.0 );
}