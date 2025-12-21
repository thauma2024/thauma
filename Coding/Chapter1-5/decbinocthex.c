#include <stdio.h>

int main( void ){

    for ( int dec = 1; dec <= 256; dec ++ ){

        int num = dec;
        int bitCount = 0;

        printf( "%d\t", dec );

        while ( num > 0 ){

            num = num / 2;
            bitCount ++;

        }

        num = dec;

        for ( int i = bitCount - 1; i >= 0; i -- ){

            int divisor = 1;

            for ( int j = 0; j < i; j ++){

                divisor *= 2;

            }

            printf( "%d", ( num / divisor)% 2 );

        }

       printf( "\t%o\t%x\n", dec, dec );
    
    }
}