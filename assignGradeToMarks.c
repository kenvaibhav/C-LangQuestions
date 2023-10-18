// Write a C prog Calculate percentage and 
// Use ternary operator to assign a grade according to marks for a student
#include<stdio.h>

void main(){
    //take input
    float phy, chem, bio, maths, comp;
    printf("Enter the marks of subjects phy, chem, bio, maths, comp: ");
    scanf("%f%f%f%f%f",&phy,&chem,&bio,&maths,&comp);
    // calculate percentage
    float per = (phy+chem+bio+maths+comp)*100/500.0;
    //printf("%f",per);
    // Assign grade
    (per >= 90) ? printf("Student Got Grade A") : 
    (per >= 80) ? printf("Student Got Grade B") :
    (per >= 70) ? printf("Student Got Grade C") :
    (per >= 60) ? printf("Student Got Grade D") :
    (per >= 40) ? printf("Student Got Grade E") : printf("Student Got Grade F");
}