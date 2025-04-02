#include<stdio.h>
int main(){
	int i = 0;
	int j = 1;
	int k;
	int l = 0;
	while(l<100){
		if(i> 100){
			break;
		}
		else{
			printf("%d\n", i);
			k = i+j;		
			i = j;
			j = k;
		}
	}
	return 0;
}
