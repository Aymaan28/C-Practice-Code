#include <stdio.h>
#include <string.h>

int main() {
	int check = 0;
	char s1[50];
	char s2[50];
	
	printf("Enter String 1: ");
	scanf("%s", &s1);
	printf("Enter String 2: ");
	scanf("%s", &s2);
	
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	
	if(l1==l2){
		for(int i = 0; i < l1; i++){
			if(s1[i] == s2[i]){
				check = check + 1;
			}
		}
		if(check == l1 and l2){
			printf("Strings length and string data are same!");
			}
		else{
			printf("Strings length but string data is not same!");
			}
		}
	else if(l1>l2){
			printf("String 1 lenght is more and not same as String 2!");
			}
	else{
			printf("String 2 lenght is more and not same as String 1!");
			}
	return 0;
	}		
