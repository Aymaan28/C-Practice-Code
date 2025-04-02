//#include <stdio.h>
//
//int main(){
//	int M;
//	int N;
//	printf("Enter Number of Row: ");
//	scanf("%d", &M);
//	printf("Enter Number of Column: ");
//	scanf("%d", &N);
//	
//	char arr[M][N];
//	int i;
//	int left = 0;
//	int right = N-1; 
//	int top = 0;
//	int bottom = M-1;
//	
//	
//	for(int i = 0; i<M; i++){
//		for(int j = 0; j<N; j++){
//			printf("Enter Element of Row %d and Column %d: ", i+1, j+1);
//			scanf("%s", &arr[i][j]);
//		}
//	}
//	
//	for(int i = 0; i<M; i++){
//		for(int j = 0; j<N; j++){
//			printf("%c ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	while(left<=right && top<=bottom){
//		for(i=left; i<=right; i++){
//			printf("%c ", arr[top][i]);
//		}
//		top++;
//		for(i=top; i<=bottom; i++){
//			printf("%c ", arr[i][right]);
//		}
//		right--;
//		}
//		if (top <= bottom){ 
//			for (i = right; i >= left; --i) {
//            printf("%c ", arr[bottom][i]);
//          }
//          bottom--;
//        }
//        if (left <= right){
//			for (i = bottom; i >= top; --i) {
//            printf("%c ", arr[i][left]);
//        }
//        left++;
//        }
//	return 0;
//}
#include <stdio.h>

int main() {
    int M, N;
    printf("Enter Number of Rows: ");
    scanf("%d", &M);
    printf("Enter Number of Columns: ");
    scanf("%d", &N);

    char arr[M][N];

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("Enter Element of Row %d and Column %d: ", i + 1, j + 1);
            scanf(" %c", &arr[i][j]);
        }
    }


    printf("\nMatrix:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }

    int left = 0, right = N - 1, top = 0, bottom = M - 1;
    
    printf("\nSpiral Order:\n");
    while (left <= right && top <= bottom) { 
        for (int i = left; i <= right; i++) {
            printf("%c ", arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            printf("%c ", arr[i][right]);
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                printf("%c ", arr[bottom][i]);
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                printf("%c ", arr[i][left]);
            }
            left++;
        }
    }

    return 0;
}
