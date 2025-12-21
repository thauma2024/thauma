#include <stdio.h>
#include <stdlib.h>
#define max(a,b)( a > b ? a : b )

void transpose( int m, int n, int* matrix, int ld);
void printarray( int m, int n ,int* matrix, int ld);
void swap( int* a, int* b );

int main( void ){

    int m, n;
    scanf( "%d %d", &m, &n );

    int ld = max(m,n);

    int *matrix;
    matrix = (int*)malloc( ld*ld*sizeof(int) );//mind the format

    for( int i = 0; i < m; i++ ){//1st print m by n
        for( int j = 0; j < n; j++ ){

            scanf( "%d", &matrix[i*ld + j] );

        }
    }

    transpose( m, n, matrix, ld );
    puts( "" );
    printarray( m, n, matrix, ld);
}

void transpose( int m, int n, int* matrix, int ld ){

    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ ){

            if( m <= n && i <= j){//ld is m
                swap( &matrix[i*ld + j], &matrix[j*ld + i]);
            }
            else if( m > n && i > j){//ld is n
                swap( &matrix[j*ld + i], &matrix[i*ld + j]);
            }

        }
    }
}

void printarray( int m, int n, int* matrix, int ld ){

    for( int j = 0; j < n; j++ ){// 2nd print n by m
        for( int i = 0; i < m; i++ ){

            printf( "%d ", matrix[j*ld + i]);

        }
        puts( "" );
    }
}

void swap( int* a, int* b ){

    int temp = *a;
    *a = *b;
    *b = temp;

}