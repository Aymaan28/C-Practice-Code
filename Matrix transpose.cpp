#include<stdio.h>
#define M 3
#define N 3
void transpose (int mat1[M][N], int mat2[N][M]) {
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mat2 [j][i] = mat1 [i][j];
        }
        
    }
    
}

int main(){
    printf("START \n");

    int my_mat [M][N] = 
	{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int out_mat [N][M];

    transpose (my_mat, out_mat);

    printf("Our final Matrix is:\n");

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", out_mat[i][j]);
        }
        printf("\n");
    }

    printf("END \n");
    return 0;
}
