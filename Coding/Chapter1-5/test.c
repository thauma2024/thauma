#include <stdio.h>

int main( void ){
    int num = 10;
    printf( "%d\n", num );
    {
        int num = 20;
        printf( "%d\n", num );

    }
    printf( "%d\n", num );
}