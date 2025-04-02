#include <stdio.h>
#include <string.h>
	int main(){
		char s[50];
		printf("Enter String: ");
		scanf("%s", &s);
		printf("String characters are: \n");
		for(int i = 0; i<strlen(s); i++){
			printf("%c\n", s[i]);
		};
		return 0;
	}
