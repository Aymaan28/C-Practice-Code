#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char roll[50];
    char course[50];
    char marks[50];
};

int main() {
	int nstudent;
	printf("Enter Number of Student(Max 20): ");
	scanf("%d", &nstudent);
  
  	
    struct Student s[nstudent] = {};
	
	for(int i = 0; i< nstudent; i++){
		printf("Enter Name %d: ", i+1);
		scanf("%s", &s[i].name);

		printf("Enter Roll %d: ", i+1);
		scanf("%s", &s[i].roll);

		printf("Enter Course %d: ", i+1);
		scanf("%s", &s[i].course);
		
		printf("Enter Marks %d: ", i+1);
		scanf("%s", &s[i].marks);
	}
	
    for (int i = 0; i < nstudent; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Course: %s\n", s[i].course);
        printf("Age: %s\n", s[i].roll);
        printf("Marks: %s\n\n", s[i].marks);
    }

    return 0;
}

