#include<stdio.h>

int main(){
	int j;
	int in;
	int min = __INT_MAX__;
	int arr[] = {5,3,4,7,9,2,8,10};
	for(int n=0;n<8;n++){
		for(int i = n; i<8; i++){
			if(min>=arr[i]){
				min = arr[i];
				in = i;
				}
			}
		j = arr[n];
		arr[n] = arr[in];
		arr[in] = j;
		min = __INT_MAX__;
	}
	for(int i = 0; i<8; i++){
		printf("%d\t", arr[i]);
		}
	return 0;
}
