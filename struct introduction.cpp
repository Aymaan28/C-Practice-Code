#include <stdio.h>
struct student{
		char name[50];
		int age;
		float marks;
		};

	int main(){
		//creating a structure variable
		struct student s1;
		
		//Assigning Value
		printf("Enter Name: ");
		scanf("%s", &s1.name);

		printf("Enter Age: ");
		scanf("%d", &s1.age);

		printf("Enter Marks: ");
		scanf("%f", &s1.marks);
		
		printf("%s, %d, %.2f", s1.name, s1.age, s1.marks);
	}
