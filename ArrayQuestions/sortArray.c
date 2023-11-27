//Wap in c to sort array in ascending and descending order
#include<stdio.h>

void main(){
    //input
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);

    int array[size];
    //input for array
    for(int i=0; i<size; i++) scanf("%d",&array[i]);

    //sort in ascending order
    for(int i=0; i<size-1; i++){

        for(int j=0; j<size-i-1; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    //print ascending array
    printf("\n The array in ascending order is: ");
    for(int i=0; i<size; i++) printf("%d ",array[i]);

    //sort in descending order
    for(int i=0; i<size-1; i++){

        for(int j=0; j<size-i-1; j++){
            if(array[j] < array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    //print descendign array
    printf("\n The array in descending order is: ");
    for(int i=0; i<size; i++) printf("%d ",array[i]);
}