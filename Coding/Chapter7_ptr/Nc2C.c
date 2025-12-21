#include <stdio.h>
//array name "string" as a pointer  
//const char *sPtr
//the character stored at sPtr can not be changed
//the location of string( sPtr ) can be changed
void printCharacter( const char *sPtr );

int main( void ){

    char string[] = "ShabiXuexiao!";

    printf( "The string is:\n" );
    printCharacter( string );

    puts( "" );

}

void printCharacter( const char *sPtr ){

    for( ; *sPtr != '\0'; ++ sPtr ){

        printf( "%c", *sPtr );

    }

}