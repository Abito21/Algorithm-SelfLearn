#include<stdio.h>

int main(){
    int A[2][3] = {2, 4, 3,
                   3, 2, 5};

    int B[3][5] = {3, 2, 5, 7, 4,
                   2, 4, 6, 3, 2,
                   3, 3, 2, 5, 4};

    int C[2][5];

    int i;
    int j;
    int k;
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            for (k = 0; k <= 2; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            
        }
    }
    
    printf("%d, %d, %d, %d, %d \n", A[0][0], A[0][1], A[0][2], A[0][3], A[0][4]);
    printf("%d, %d, %d, %d, %d \n", A[1][0], A[1][1], A[1][2], A[1][3], A[1][4]);

    return 0;
}