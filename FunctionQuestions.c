//Write a c program to create a function name as 
//void findAreaOfcircle(int radius) and calculate the area of circle

//Wrie a C program to create a function name as void findAreaOfRectangle(int length,int width)
// and calcuate area of rectangle

//Write a C program to create a function name as void findAreaOfTriangle(int base,int height)
// and calculate area of Triangle

//Write a C program to create a function name as void findSum(int num1, int num2)
// and find sum 

//Write a C program to create a function name as void findSub(int num1, int num2)
// and find substraction of two numbers

////Write a C program to create a function name as void findDiv(int num1, int num2)
// and find division of numbers


////Write a C program to create a function name as void findMultiplication(int num1, int num2)
// and find Multiplication of numbers

//Write a C program to create a function name as void getfactorial(int no) calculate the 
// factorial of a given number using function

//Write a C program to create function name as void noReverse(int no) to display
//the number is reverse

//Write a C program to create a function void checkPalindrome() to check number is palindrome 
// or not

#include<stdio.h>

void findAreaOfcircle(int radius){
    int areaOfCircle = 3.14 * radius * radius;
    printf("\nThe area of circle whos radius is %d is %d",radius,areaOfCircle);
}
void findAreaOfRectangle(int length, int width){
    printf("\nThe area of Rectangle whos length is %d and breadth is %d is %d",length,width,
    length*width);
}
void findAreaOfTriangle(int base,int height){
    printf("\nThe area of Triangle having base %d and height %d is %d",base,height,
    (base*height)/2);
}
void findSum(int num1, int num2){
    printf("\nThe sum of %d and %d is %d",num1,num2,num1+num2);
}
void findSub(int num1, int num2){
    printf("\nThe substraction of %d and %d is %d",num1,num2,num1-num2);
}
void findDiv(int num1, int num2){
    printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
}
void findMultiplication(int num1, int num2){
    printf("\nThe Multiplication of %d and %d is %d",num1,num2,num1*num2);
}
void factorial(int n){
    int facto = 1;
    int temp = n;
    while(temp>0){
        facto = facto * temp;
        temp = temp-1;
    }
    printf("\nThe Factorial of given number %d is %d",n,facto);
}
void noReverse(int no){
    int rev = 0;
    int temp = no;

    while(temp){
        int rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
    printf("The rev of num %d is %d",no,rev);
}
void checkPalindrome(){
    int num;
    printf("Enter num to check palindrome or not : ");
    scanf("%d",&num);
    int rev = 0;
    int temp = num;

    while(temp){
        int rem = temp%10;
        rev = rev*10+rem;
        temp = temp/10;
    }
    if(temp == rev){
        printf("\nYes it is a palindrome");
    }else{
        printf("\nNo it is not a palindrome");
    }
}

int main(){
    findAreaOfcircle(5);
    findAreaOfRectangle(10,9);
    findAreaOfTriangle(10,15);
    findSum(11,155);
    findSub(13,2);
    findDiv(25,3);
    findMultiplication(24,3);
    factorial(5);
    noReverse(234);
    checkPalindrome();
}
