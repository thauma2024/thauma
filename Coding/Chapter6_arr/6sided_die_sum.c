#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main( void ){

    srand( time( NULL) );

    int s[SIZE] = {0};

    for( int i = 0; i <= 600000; i++ ){

        size_t face = 1 + rand() % 6;

        s[ face ]++;

    }

    printf( "%s%13s\n", "Face", "Frequency");

    for ( size_t face = 1; face < SIZE; face++ ){

        printf("%lu%13d\n", face, s[face] );
    }
}