#include <stdio.h>
	int main(){
		int h1, h2, m1, m2, s1, s2;
		printf("Enter h1\n");
		scanf("%d", &h1);
		printf("Enter m1\n");
		scanf("%d", &m1);
		printf("Enter s1\n");
		scanf("%d", &s1);
		printf("Enter h2\n");
		scanf("%d", &h2);
		printf("Enter m2\n");
		scanf("%d", &m2);
		printf("Enter s2\n");
		scanf("%d", &s2);
		
		int t1 = h1*3600 + m1*60 + s1;
		int t2 = h2*3600 + m2*60 + s2;
		if(t1>=t2){
			int d = t1-t2;
			printf("Seconds %d", d);
		}
		else{
			int d = t2-t1;

			printf("Seconds %d", d);
		}
		return 0;
	}
