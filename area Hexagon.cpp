#include <stdio.h>
#include <math.h>

void areaH(int* x) {
    int t = *x;
    double ar;
    
    ar = (sqrt(3) * t * t) / 4;
    ar = 6 * ar;
    printf("Area of hexagon is: %lf", ar);
}

int main() {
	int a = 0;
	printf("Enter length side of Hexagon: ");
	scanf("%d", &a);
    areaH(&a); 

    return 0;
}
