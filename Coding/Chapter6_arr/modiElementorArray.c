#include <stdio.h>
#define SIZE 5

void modiArray( int b[], size_t size );
void modiElement( int e );

int main( void ){

    int a[SIZE] = { 0, 1, 2, 3, 4 };

    puts( "by Reference:\n\nThe original Array:" );

    for ( size_t i = 0; i < SIZE; ++i ) {
        printf( "%3d", a[i] );
    }

    puts( "" );

    modiArray( a, SIZE );
    puts( "The modified array:" );

    for ( size_t i = 0; i < SIZE; ++i ) {
        printf( "%3d", a[i] );
    }

    printf( "\n\n\nby Value:\nThe value of a[3] is %d\n", a[3] );

    modiElement( a[3] );

    printf( "The value of a[3] is %d", a[3] );

}

void modiArray( int b[], size_t size ){

    for( size_t i = 0; i < size; i++ ){
        b[i] *= 2;
    }

}

void modiElement( int e ){
    printf( "Value in modiElement is %d\n", e *= 2 );
}