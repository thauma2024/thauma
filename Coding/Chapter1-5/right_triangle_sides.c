#include <stdio.h>

int main( void ){

    for ( int side1 = 1 ; side1 <= 500; side1 ++ ){

        for ( int  side2 = side1; side2 <= 500; side2 ++ ){

            for ( int side3 = side2; side3 <= 500; side3++ ){

                if ( side3 * side3 == side1 * side1 + side2 * side2 ){

                    printf( "%d\t%d\t%d\n", side1, side2, side3 );
                }
            }
        }
    }

    return 0;

}