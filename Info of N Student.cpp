#include <stdio.h>

struct student{
		char name[20];
		int roll[20];
		char course[20];
		float marks[20];
		};
		
int main() {
	int nstudent;
	printf("Enter Number of Student:(Max 20) ");
	scanf("%d", &nstudent);
	
	struct student s;
	for(int i = 0; i< nstudent; i++){
		printf("Enter Name %d: ", i+1);
		scanf("%s", &s.name[i]);

		printf("Enter Roll %d: ", i+1);
		scanf("%d", &s.roll[i]);

		printf("Enter Course %d: ", i+1);
		scanf("%s", &s.course[i]);
		
		printf("Enter Marks %d: ", i+1);
		scanf("%s", &s.marks[i]);
	}
	
	for(int j = 0; j< nstudent; j++){
		printf("Name %d: %s ", j+1, s.name);
		printf("Roll %d: %d", j+1, s.roll);
		printf("Course %d: %s", j+1, s.course);
		printf("Marks %d: %.2f\n", j+1, s.marks);
	}
    
    return 0;
}
