#include<stdio.h>
int main(){
	int k;
	for(int i = 1; i<=100; i++){
		k = 0;
		for(int j = 1; j<=i; j++){
			if(i%j == 0){
				k = k + 1;
			}
		}
		if(k==2){
			printf("%d\n", i);
			}
	}
	return 0;
}
