#include <stdio.h>

unsigned long long int factorial( unsigned int i );

int main( void )
{
    for ( unsigned int i = 0; i <= 21; i++)
    {
        printf( "%u! = %llu\n", i, factorial( i ) );
    }

}

unsigned long long int factorial( unsigned int i ){

    if ( i <= 1 ){
        return 1;
    }
    else{
        return (i * factorial( i - 1 ));
    }
}