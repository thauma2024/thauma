#include <stdio.h>

int main( void ){

    for ( int i = 1; i <= 10; i ++ ){

        for ( int l = 1; l <= i; l ++ ){

            printf( "*" );

        }

        for ( int j = 10 - i; j >= 0; j --){

            printf( "  " );

        }

        for ( int k = 1; k <= i; k ++ ){

            printf( "*" );

        }

        printf( "\n" );

    }
}