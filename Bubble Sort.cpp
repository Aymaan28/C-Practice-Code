#include<stdio.h>

int main(){
	int n = 0;
	int arr[] = {5,3,4,7,8,2,9,10};
	while (n<8){
		for(int i = 0; i<8; i++){
			if(arr[i] >= arr[i+1]){
				int j = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = j;
				}
			}
		n = n+1;
	}
	for(int i = 0; i<8; i++){
		printf("%d\n", arr[i]);
		}
return 0;
}
