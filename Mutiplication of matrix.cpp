#include<stdio.h>
#define M 3
#define N 3

void multiple(int matM[M][N], int mat1[M][N], int mat2[M][N]) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            matM[i][j] = 0;
 			for (int k = 0; k < M; k++) {
                matM[i][j] = matM[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}

int main(){
    printf("START \n");
    int matM[M][N] = {};
    int my_mat1[M][N] = 
	{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int my_mat2[M][N] = 
	{
        {1,0,0},
        {0,1,0},
        {0,0,1}
    };

    multiple(matM, my_mat1, my_mat2);

    printf("Our final Matrix Multiply is:\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matM[i][j]);
        }
        printf("\n");
    }
    printf("END \n");
    return 0;
}
