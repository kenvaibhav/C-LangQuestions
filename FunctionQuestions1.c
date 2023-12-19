//Write a menu driven program to create an array of size 10 take input from user then create all function and 
//perform all operation using switch case and do while loop
//1) Show all element of array
//2) Sort array element in Ascending Order
//3) Sort array element in descending Order
//4) Search specific value by value
//5) Add element at specific index
//6) Delete element at specific index
//7) Calculate frequency of each element in array

#include<stdio.h>
#include<stdlib.h>

//show all element of array
void showElements(int array[],int size){
    
    for(int i=0;i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}
//sort array element in Ascending Order
void sortInAscendingOrder(int array[],int size){

    int temp = size-1;
    for(int i = 0; i<size-1; i++){
        
        for(int j=0; j<temp;j++){
            if(array[j]>array[j+1]){
                int temp2 = array[j];
                array[j] = array[j+1];
                array[j+1] = temp2;
            }
        }
        temp--;
    }
    //print array
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

//Sort in Descending order
void descending(int array[],int size){
    int temp = 0;
    for(int i = size-1; i > 0; i++){
        
        for(int j=size-1; j > temp;j++){
            if(array[j]>array[j-1]){
                int temp2 = array[j];
                array[j] = array[j-1];
                array[j-1] = temp2;
            }
        }
        temp++;
    }
    //print array
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
}

void main(){
    int* array;
    //input
    int size;
    printf("Enter size of array: \n");
    scanf("%d",&size);

    array = malloc(sizeof(int) *size);
    for(int i=0 ;i<size ; i++){
        scanf("%d",&array[i]);
    }

    printf("\n");
    int z = 1;
    do{
        printf(" Choose One option from the given below: \n");
        printf("1) Show all element of array\n");
        printf("2) Sort array element in Ascending Order\n");
        printf("3) Sort array element in descending Order \n");
        printf("4) Search specific value by value \n");
        printf("5) Add element at specific index \n");
        printf("6) Delete element at specific index \n");
        printf("7) Calculate frequency of each element in array \n");
        
        //take choice
        printf("\n\nEnter the choice: ");
        int input;
        scanf("%d",&input);

        //Using switch case
        switch (input)
        {
        case 1: showElements(array,size);
            break;
        case 2: sortInAscendingOrder(array,size);
            break;
        case 3: descending(array,size);
            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        case 7:

            break;
        default:
            printf("Do you want to Continue:");
            printf("If yes then click 1 otherwise click any other number");
            scanf("%d",&z);
            break;
        }
    }while(z);
    free(array);
}