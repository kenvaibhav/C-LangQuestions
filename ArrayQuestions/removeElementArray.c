//wap in c to remove element in specific index
#include<stdio.h>

void main(){
    //input
    printf("Enter the size of array: ");
    int size;
    scanf("%d",&size);

    int array[size];
    //input for array
    for(int i=0; i<size; i++) scanf("%d",&array[i]);

    //input for index of element to delete
    printf("Enter the index of element to delete : ");
    int index;
    scanf("%d",&index);
    
    if(index < size){
        for(int i=index; i<size; i++){
            array[i] = array[i+1];       
        }
        size--;
        //print new array
        printf("\nThe new array is: ");
        for(int i=0; i<size; i++) printf("%d ",array[i]);
    }else{
        printf("\nPlease enter correct index.");
    }
    

}