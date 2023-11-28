// WAP in C to check whether the given array is 
// Majority Array or not
// Majority array = it is array in which there should greater occurences of one element
// greater than n/2, where n is total no of elements in that array 
// Majority array contains majority element
#include<stdio.h>

void main(){
        //take input
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);
    int array[size];

    //take input for the array
    for(int i=0; i< size; i++){
        scanf("%d",&array[i]);
    }
    printf("\n");

    // firstly we will calculate n/2
    int checkOccurence = size/2; // the no of occurences should be greater than check for atleast 
    // one element that is majority element

    // we have find occurences also

    //sort the elements using bubble sort
    int temp = size;
    for(int i = 0; i<size-1; i++){

        for(int j = 0; j<temp-i-1 ; j++){
            if(array[j] > array[j+1]){
                int temp2 = array[j];
                array[j] = array[j+1];
                array[j+1] = temp2; 
            }
        }
    }
    int highestOccurence = 0;

    int check = array[0]; 
    int times = 0;
    for(int i=0 ;i<size; i++){
        
        if(check == array[i]){
            times++;
        }else{
            check = array[i];
            times = 0;
            i--;
        }
        //save highest occurence among all elements
        if(times > highestOccurence){
            highestOccurence = times;
        }
    }

    // print the result
    if(highestOccurence > checkOccurence){
        printf("Yes the array is Majority array.");
    }else{
        printf("No the array is not Majority array.");
    }

    
    
}