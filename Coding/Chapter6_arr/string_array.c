#include <stdio.h>
#define SIZE 20

int main( void ){

    char str1[SIZE];
    char str2[] = "string literal";

    printf( "%s", "Enter a string < 19 characters" );
    scanf( "%19s", str1 );

    printf( "str1 is: %s\n str2 is: %s\n"
        "str1 with spaces between characters is:\n",
        str1, str2 );

    for( size_t i = 0; i < SIZE && str1[i] != '\0'; i++ ){//don't forget about str1[i] != '\0'

        printf( "%c ", str1[i] );
    
    }
    
    puts( "" );
}