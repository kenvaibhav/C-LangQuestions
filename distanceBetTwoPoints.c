// Write a C prog to find distance bet two points loacated on graph by its coordinates point A
// have (x1,y1) co-ordinates and point B have (x2,y2) co-ordinates
#include<stdio.h>
#include<math.h>

void main(){
    float x1,y1,x2,y2;
    //take input
    printf("Enter point A coordinates: ");
    scanf("%f%f",&x1,&y1);

    printf("Enter point B coordinates: ");
    scanf("%f%f",&x2,&y2);
    // Find distance

    float dis;
    dis = pow(pow(x2-x1,2.0)+pow(y2-y1,2),0.5);
    printf("Distance between point A and B is : %f",dis);

    
}