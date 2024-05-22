#include <math.h> 
#include "header.h" 

float distance(struct Point A, struct Point B) { 
    float dx = A.x - B.x; 
    float dy = A.y - B.y; 
    float dz = A.z - B.z; 
    return sqrt(dx*dx + dy*dy + dz*dz); 
}

