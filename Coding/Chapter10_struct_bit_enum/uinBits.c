#include <stdio.h>

void displayBits_leftshift( unsigned int value );
void displayBits_rightshift( unsigned int value );

int main( void ){

    printf( "Enter a nonnegative int number : \n" );

    unsigned int value = 0;

    scanf( "%d", &value );

    displayBits_leftshift( value );

    displayBits_rightshift( value );

}

void displayBits_leftshift( unsigned int value ){

    unsigned int mask = 1 << 31;

    for ( unsigned int c = 1; c <= 32; c++ ){

        putchar( value & mask ? '1' : '0' );

        value <<= 1;

        if ( c % 8 == 0 ){
            putchar( ' ' );//putchar use ' ' not " ", otherwise crazy!
        }
    }

    putchar( '\n' );
}

void displayBits_rightshift( unsigned int value ){

    unsigned int mask = 1 << 31 ;// int type ->error, cuz when 1 is shifted to the highest bit, 
                                //it will be considered as the - sign

    for ( unsigned int c = 1; c <= 32; c++ ){

        putchar( value & mask ? '1' : '0' );

        mask >>= 1;

        if ( c % 8 == 0 ){
            putchar( ' ' );//putchar use ' ' not " "
        }
    }

    putchar( '\n' );
}
//not all computers store unsigned int in 32bits
//so using CHAR_BIT( in <limit.h> ) can make sure 
//ie 31 = CHAR_BIT *size of( unsigned int ) - 1