#include <stdio.h>

void print1Darray( int a[], size_t size );
void print2Darray( int row, int col, int a[row][col] );//vairable length array must be defined with col

int main( void ){

    printf( "Enter the size of 1D array:\n" );

    size_t size = 0;

    scanf( "%u", &size );


    printf( "Enter the size of the 1st 2D array:\n" );

    int row1 = 0;
    int col1 = 0;

    scanf( "%d %d", &row1, &col1);

    printf( "Enter the size of the 2nd 2D array:\n" );

    int row2 = 0;
    int col2 = 0;

    scanf( "%d %d", &row2, &col2);


    int array[size]; //variable sized object may not be initialized

    int Array2D_1[row1][col1];

    int Array2D_2[row2][col2];

    for( size_t i = 0; i < size; i ++ ){

        array[i] = i * i;

    }

    for( int i = 0; i < row1; i++ ){
        for( int j = 0; j < col1; j++ ){
            Array2D_1[i][j] = i + j;
        }
    }

    for( int i = 0; i < row2; i++ ){
        for( int j = 0; j < col2; j++ ){
            Array2D_2[i][j] = i * j;
        }
    }

    print1Darray( array, size );

    puts( "\nThe 1st 2D array:" );

    print2Darray( row1, col1, Array2D_1);

    puts( "The 2nd 2D array:" );

    print2Darray( row2, col2, Array2D_2 );

    return 0; 
}

void print1Darray( int a[], size_t size ){

    printf( "Elements of 1D array:\n" );

    for ( size_t i = 0; i < size; i++ ){

        printf( "%3d", a[i] );
    }

    puts( "" );

}

void print2Darray( int row, int col, int a[row][col] ){

    printf( "Elements of 2D array:\n" );

    for ( int i = 0; i < row; i++ ){
        for ( int j = 0; j < col; j++ ){
            printf( "%4d", a[i][j] );
        }
        puts( "" );
    }

    puts( "" );
}