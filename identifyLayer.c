//Write a C prog to find the layer of earth
#include<stdio.h>

void main(){
    //Take input distance and density then according to that we will find layer
    int distance;
    float density;
    printf("Enter distance in km: ");
    scanf("%d",&distance);

    printf("Enter density in g/sq.cm: ");
    scanf("%f",&density);

    // check
    if(distance >= 0 && distance < 100 && density >= 0 && density <= 2.8){
        prinf("Earth layer: Crust");
    }else if(distance >= 100 && distance < 2900 && density > 2.8 && density <= 4.6){
        printf("Earth layer: Mantle");
    }else if(distance >= 2900 && distance < 5100 && density > 4.6 && density <= 10.5){
        printf("Earth layer: Outer core");
    }else{
        printf("Earth layer: Inner core");
    }
}