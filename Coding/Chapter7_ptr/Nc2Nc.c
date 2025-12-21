#include <stdio.h>
#include <ctype.h>
//all can be changed
void convertToUppercase( char *sPtr );

int main( void ){

    char string[] = "ShabiXuexiao!";

    printf( "The string before conversion:%s\n", string );

    convertToUppercase( string );

    printf( "The string after conversion:%s\n", string );

}

void convertToUppercase( char *sPtr ){

    while ( *sPtr != '\0' ){

        *sPtr = toupper( *sPtr );
        sPtr ++; //here the index in array plus 1

    }
}