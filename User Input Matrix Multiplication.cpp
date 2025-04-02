#include<stdio.h>
#define M 3
#define N 3

void multiple(int matM[][N], int mat1[][N], int mat2[][N], int r, int c, int R, int C) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matM[i][j] = 0;
 			for (int k = 0; k < C; k++) {
                matM[i][j] = matM[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}

int main(){
	int r,c,R,C;
    printf("START \n");
    printf("Enter Matrix 1 Row: ");
    scanf("%d", &r);
    printf("Enter Matrix 1 Column: ");
    scanf("%d", &c);
    printf("Enter Matrix 2 Row: ");
    scanf("%d", &R);
    printf("Enter Matrix 2 Column: ");
    scanf("%d", &C);
    
    int matM[r][C] = {};
    int my_mat1[r][c] = {};
	int my_mat2[R][C] = {};
	
	printf("Enter Matrix 1: ");
	for(int i = 0; i<r; i++){
		for(int j = 0; j<c; j++){
			int temp = 0;
			printf("Enter row %d, column %d for Matrix 1: ", i, j);
			scanf("%d", temp);
			my_mat1[i][j] = temp;
		}
	}
	
	for(int i = 0; i<R; i++){
		for(int j = 0; j<C; j++){
			int temp = 0;
			printf("Enter row %d, column %d for Matrix 2: ", i, j);
			scanf("%d", temp);
			my_mat2[i][j] = temp;
		}
	}
	
    multiple(matM, my_mat1, my_mat2, r, c, R, C);

    printf("Our final Matrix Multiply is:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < C; j++)
        {
            printf("%d ", matM[i][j]);
        }
        printf("\n");
    }
    printf("END \n");
    return 0;
}
