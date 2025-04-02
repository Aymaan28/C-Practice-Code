#include <stdio.h>
//Q) Write a program in C/C++ to search a number from array of number A = (25,35,15,10,9,20)

int main() {
    int myNumbers[] = {23,35,15,10,9,20};
    int i;
    int n;
    scanf("%d", &i);
    for(n = 0; n<6; n++){
	if (myNumbers[n] == i){
  		printf("%d is in the list\n", i);
  		break;
		}else{
		printf("%d is not in the list\n", i);
		break;
	}
   }
    return 0;
}
