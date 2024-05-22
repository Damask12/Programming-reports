#include <stdio.h>
#include <math.h>
double func(double x, double E, int n, long long unsigned int prevFac){
	int fac = prevFac * 2 * n * (2 * n + 1);
	double element = pow(x, 2 * n + 1) / fac;
	if (element - E < 0) 
	return element + x;
    printf("\n%d --> %lf", n, element);
	return element + func(x, E, n++, fac);
}
int main(){
	double x = 1.7, E = 0.001;
    scanf(" %lf", &x);
	printf("\nsh(%.7lf) = %lf", x, func(x, E, 1, 1));
	return 0;
}
