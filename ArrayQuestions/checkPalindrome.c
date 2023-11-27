//WAP to check whether the given contains palindrome or not
#include<stdio.h>

void main(){
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);

    int array[size];
    //input for array
    for(int i=0; i<size; i++) scanf("%d",&array[i]);

    //check palindrome or not
    int j=size-1;
    int flag = 1;
    for(int k=0; k<size/2; k++){
        if(array[k] != array[j]){
            printf("\nThe given array is not a palindrome. ");
            flag = 0;
            break;
        }
        j--;
    }
    if(flag) printf("\nYes, The given array is a Palindrome. ");
}