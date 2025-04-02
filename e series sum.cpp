#include<stdio.h>
#include <math.h>
int main(){
	int n = 0;
	double s;
	printf("Enter value of n: ");
	scanf("%d",&n);
	n = n*(-1);
	s = exp(n); 
    printf("Sum of series is %f\n", s);
	return 0;
}
