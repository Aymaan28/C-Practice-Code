#include<stdio.h>
#define M 3
#define N 3

void add(int matA[M][N], int mat1[M][N], int mat2[M][N]) {
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matA[i][j] = mat1[i][j] + mat2[i][j];
        }
        
    }
    
}

void sub(int matS[M][N], int mat1[M][N], int mat2[M][N]) {
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matS[i][j] = mat1[i][j] - mat2[i][j];
        }
        
    }
    
}


int main(){
    printf("START \n");
    int matA[M][N] = {{1}};
    int matS[M][N] = {{1}};
    int my_mat [M][N] = 
	{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int my_mat2 [M][N] = 
	{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    add(matA, my_mat, my_mat2);

    printf("Our final Matrix Add is:\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matA[i][j]);
        }
        printf("\n");
    }
    
    sub(matS, my_mat, my_mat2);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", matS[i][j]);
        }
        printf("\n");
    }
    printf("Our final Matrix Sub is:\n");

    printf("END \n");
    return 0;
}
