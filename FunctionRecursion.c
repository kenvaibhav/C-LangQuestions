//Write a program to check the even or odd using functions
//write a program to find maximum and minimum in array using function and recursion
#include<stdio.h>
#include<conio.h>

void checkEvenOdd(int a){
    if(a%2 == 0){
        printf("\n%d is Even Number. ",a);
    }else{
        printf("\n%d is Odd Number. ",a);
    }
}
int max = -1,min = -1;
void findMaxMin(int array[],int len){
    //base case
    if(len == 0){
        printf("\nThe maximum value is %d and Min value is %d",max,min);
        return;
    }
    //fill intial value of min and max
    if(max == -1 && min == -1){
        max = array[len-1]; // 10
        min = array[len-1]; // 10
    }
    //compare the last element of array to the existing min, max
    if(max < array[len-1]){
        max = array[len-1]; // 10
    }else if(min > array[len-1]){
        min = array[len-1]; //6 1
    }
    //call recursion
    findMaxMin(array,len-1); // 4 3 2 1
}

void main(){
    checkEvenOdd(120);
    int array[5] = {2,5,1,6,10};
    findMaxMin(array,5);
}