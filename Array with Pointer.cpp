#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int *pArr = arr;
    
    for(int i = 0; i<10; i++){
    printf("%d\n", *(pArr + i));
	}
    return 0;
}
