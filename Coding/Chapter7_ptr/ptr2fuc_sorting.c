#include <stdio.h>
#define SIZE 10

void bbsort( int work[], size_t size, int (*compare) (int a , int b) );//Remember the format here

int ascending( int a, int b );
int descending( int a, int b );

int main( void ){

    int order = 0;

    int a[SIZE] = { 2, 18, 4, 9, 34, 21, 53, 62, 93, 74};

    printf( "If 1 ascending, if 2 descending\n" );

    scanf( "%d", &order );

    puts( "Original Order" );

    for ( size_t i = 0; i < SIZE; i++ ){
        printf( "%5d", a[i] );
    }

    puts("");

    if ( order == 1 ){
        bbsort( a, SIZE, ascending );
    }
    else{
        bbsort( a, SIZE, descending );
    }

    printf( "%s Order\n", order % 2 == 0 ? "Descending" : "Ascending" );

    for ( size_t i = 0; i < SIZE; i++ ){
        printf( "%5d", a[i] );
    }

}


void bbsort( int work[], size_t size, int (*compare) ( int a, int b ) ){

    void swap( int *element1Ptr, int *element2Ptr );//easy to forget

    for( size_t i = 1; i < size; i ++ ){//the final element need not comparison
        for ( size_t j = 0; j < size - 1 ; j ++ ){

            if ( (*compare) ( work[j], work[j+1])){//attention to the format
                swap( &work[j], &work[j+1] );//easy to forget &
            }
        }
    }
}

void swap( int *element1Ptr, int *element2Ptr ){
    int temp = *element1Ptr;
    *element1Ptr = *element2Ptr;
    *element2Ptr = temp;
}

int ascending( int a, int b ){

    return a > b;

}

int descending( int a, int b ){
    
    return b > a;

}