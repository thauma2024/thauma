#include <stdio.h>

unsigned long long int fibonacci( unsigned int i );

int main( void ){

    for ( unsigned int i = 1; i <= 30; i++ ){
        printf( "%u : %llu\n ", i, fibonacci(i) );
    }

}

unsigned long long int fibonacci( unsigned int i ){

    if ( i <= 1 ){
        return 1;
    }
    else{
        return ( fibonacci( i - 2 ) + fibonacci( i - 1 ) );
    }

}
 