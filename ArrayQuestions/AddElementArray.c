//WAP in C to add an element in array at specific index;

#include<stdio.h>

void main(){
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);

    int array[size];
    //input for array
    for(int i=0; i<size; i++) scanf("%d",&array[i]);

    printf("Enter index at which you want enter the element : ");
    int index;
    scanf("%d",&index);

    printf("\nEnter the element you want to add : ");
    int element;
    scanf("%d",&element);


    if(index < size){
        //add the element into array
        int hold = array[index];
        for(int i=index; i<size; i++){
            if(i==index){
                array[index] = element;
            }else{
                int temp = array[i];
                array[i] = hold;
                hold = temp;
            }
        }
        size++;
        array[size-1] = hold;
        //print new array
        printf("\nThe new array is: ");
        for(int i=0; i<size; i++) printf("%d ",array[i]);
    }else{
        printf("\nPlease enter correct index.");
    }
}