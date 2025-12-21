#include <stdio.h>
#define SIZE 10

void bbsortbyrefer( int *const array, size_t size );

int main( void ){

    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

    puts( "The original order:" );

    for ( size_t i = 0; i < SIZE; i ++ ){

        printf( "%4d", a[i] );

    }

    bbsortbyrefer( a, SIZE );

    printf( "\nThe ascending order:\n" );

    for ( size_t i = 0; i < SIZE; i ++ ){

        printf( "%4d", a[i] );

    }

}

void bbsortbyrefer( int *const array, size_t size ){

    void swap( int *element1, int *element2 );

    for( size_t pass = 0; pass < size - 1; pass ++ ){

        for( size_t i = 0; i < size - 1; i ++ ){

            if ( array[i] > array[i+1] ){
                swap( &array[i], &array[i+1] ); //易错：换的是地址不是值
            }

        }

    }

}

void swap( int *element1, int *element2 ){

    int hold = *element1;
    *element1 = *element2;
    *element2 = hold;

}