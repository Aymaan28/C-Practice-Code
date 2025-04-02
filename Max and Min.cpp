#include<stdio.h>

int main(){
	int min = __INT_MAX__;
	int max = 0;
	int arr[] = {5,3,4,7,9,2,8,10};
		for(int i = 0; i<8; i++){
			if(min>=arr[i]){
				min = arr[i];
				}
			if(max<=arr[i]){
				max = arr[i];
				}
			}
	printf("Minimum %d\t", min);
	printf("Maximum %d\t", max);
	return 0;
}
