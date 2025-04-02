#include <stdio.h>
struct rectangle{
		float lenght;
		float width;
		};

void createRectangle(float l, float b){
	float area = l*b;
	float perimeter = 2*(l+b);
	
	printf("Area: %f, Perimeter: %f", area, perimeter);
}

	int main(){
		struct rectangle r1;

		printf("Enter lenght: ");
		scanf("%f", &r1.lenght);

		printf("Enter width: ");
		scanf("%f", &r1.width);
		
		createRectangle(r1.lenght, r1.width);
		
		return 0;
	}
