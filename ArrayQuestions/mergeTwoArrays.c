//wap in c to merge two arrays 
#include<stdio.h>

void main(){
    //input
    printf("Enter the size of first array: ");
    int size1;
    scanf("%d",&size1);

    printf("Enter the size of second array: ");
    int size2;
    scanf("%d",&size2);

    int array1[size1];
    int array2[size2];
    //input for array
    for(int i=0; i<size1; i++) scanf("%d",&array1[i]);
    for(int i=0; i<size2; i++) scanf("%d",&array2[i]);

    //Merge
    int array3[size1+size2];
    for(int i=0; i<size1+size2; i++){
        if(i<size1){
            array3[i] = array1[i];
        }else{
            array3[i] = array2[i-size1];
        }
    }
    //print merged array
    printf("\nThe merged array is : ");
    for(int i=0; i<size1+size2; i++) printf("%d ",array3[i]);
}