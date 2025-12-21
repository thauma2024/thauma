#include <stdio.h>

void displayBits( unsigned int value );

int main( void ){

    unsigned int num1 = 0;
    scanf( "%u", &num1 );

    unsigned int mask = 1;

    puts( "Original" );
    displayBits( num1 );
    displayBits( mask );

    puts( "&" );
    displayBits( num1 & mask );//both 1 -> 1;


    unsigned int num2a = 0;
    scanf( "%u", &num2a );
    unsigned int num2b = 0;
    scanf( "%u", &num2b );

    puts( "Original" );
    displayBits( num2a );
    displayBits( num2b );

    puts( "|" );
    displayBits( num2a | num2b );//one 1 -> 1;


    unsigned int num3a = 0;
    scanf( "%u", &num3a );
    unsigned int num3b = 0;
    scanf( "%u", &num3b );

    puts( "Original" );
    displayBits( num3a );
    displayBits( num3b );

    puts( "^" );
    displayBits( num3a ^ num3b );//different -> 1 ; same -> 0 ;


    unsigned int num4 = 0;
    scanf( "%u", &num4 );

    puts( "Original" );
    displayBits( num4 );

    puts( "~" );
    displayBits( ~num4 );// 1 -> 0; 0 -> 1;

}

void displayBits( unsigned int value ){

    unsigned int mask = 1 << 31;

    for( unsigned int i = 1; i <= 32; i++ ){

        putchar( mask&value ? '1' : '0' );

        value <<= 1;

        if( i % 4 == 0 ){
            putchar( ' ' );
        }

    }

    puts( "" );

}