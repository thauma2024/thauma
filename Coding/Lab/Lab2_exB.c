#include <stdio.h>
#include <stdlib.h>

#define max(a, b) ((a) > (b)) ? (a) : (b)

void transpose(int *matrix, int m, int n, int ld)
{
    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(m <= n && j > i)
            {
                int k = matrix[i * ld + j];
                matrix[i * ld + j] = matrix[j * ld + i];
                matrix[j * ld + i] = k;
            }
            else if(m > n && j < i)
            {
                int k = matrix[i * ld + j];
                matrix[i * ld + j] = matrix[j * ld + i];
                matrix[j * ld + i] = k;
            }
        }
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    int ld = max(m, n); //leading dimension 
    int *matrix; 
    matrix = (int *)malloc(ld * ld * sizeof(int));

    /* You can try the following two samples during your local testing
    Sample input 1:
    2 3
    1 2 3 4 5 6
    matrix (row-major order):
    1 2 3 
    4 5 6 
    0 0 0     

    Sample input 2:
    3 2
    1 2 3 4 5 6
    matrix (row-major order):
    1 2 0
    3 4 0
    5 6 0 
    */

    for(int i = 0; i < m; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            scanf("%d", &matrix[i * ld + j]);
        }
    }
    
    transpose(matrix, m, n, ld);

    for(int j = 0; j < n; ++j)
    {
        for(int i = 0; i < m; ++i)
        {
            printf("%d ", matrix[j * ld + i]);
        }
    }
    return 0;
}