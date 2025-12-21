#include <stdio.h>
#include <stdlib.h>

void transpose( int m, int n, int max, int matrix[][max] );
void printarray( int max, int matrix[][max] );
void swap( int* a, int* b );

int main( void ){

    int m, n;
    scanf( "%d %d", &m, &n );

    int max = ( m > n ? m : n );

    int matrix[max][max];

    for( int i = 0; i < max; i++ ){//1st print m by n
        for( int j = 0; j < max; j++ ){

            matrix[i][j] = 0;

        }
    }


    for( int i = 0; i < m; i++ ){//1st print m by n
        for( int j = 0; j < n; j++ ){

            scanf( "%d", &matrix[i][j] );

        }
    }

    transpose( m, n, max, matrix );
    puts( "" );
    printarray( max, matrix );

}

void transpose( int m, int n, int max, int matrix[][max] ){

    for( int i = 0; i < m; i++ ){
        for( int j = 0; j < n; j++ ){

            if( ( (m<=n && i<j) || (m>n && j>i) ) ){
                swap( &matrix[i][j], &matrix[j][i] );
            }
        }
    }
}

void printarray( int max, int matrix[][max]){

    for( int j = 0; j < max; j++ ){// 2nd print n by m
        for( int i = 0; i < max; i++ ){

            printf( "%d ", matrix[j][i]);

        }
        puts( "" );
    }
}

void swap( int* a, int* b ){

    int temp = *a;
    *a = *b;
    *b = temp;

}