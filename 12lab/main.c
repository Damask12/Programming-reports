#include <stdio.h> 
#include "header.h" 
 
int main() { 
    struct Point A = {1.0, 2.0, 3.0}; 
    struct Point B = {4.0, 5.0, 6.0}; 
     
    printf("Enter coordinates of point A (x y z): "); 
    scanf("%f %f %f", &A.x, &A.y, &A.z); 
     
    printf("Enter coordinates of point B (x y z): "); 
    scanf("%f %f %f", &B.x, &B.y, &B.z); 
     
    printf("Distance between A and B is: %.2f \n", distance(A, B)); 
     
    return 0; 
}

