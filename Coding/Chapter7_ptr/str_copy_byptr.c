#include <stdio.h>
#define SIZE 10

void copy1( char * const s1, const char * const s2 );

void copy2( char * const s1, const char * const s2 );

int main( void ){

    char str1[SIZE];
    char * str2 = "Hello";

    char str3[SIZE];
    char * str4 = "World";

    copy1( str1, str2 );
    printf( "str1 = %s\n", str1 );

    copy2( str3, str4 );
    printf( "str3 = %s\n", str3);

}

void copy1( char * const s1, const char * const s2 ){

    for ( size_t i = 0; ( s1[i] = s2[i]) != '\0'; ++i ){//( s1[i] = s2[i]) != '\0' s1 copy s2 till it reaches \0
        ;
    }

}

void copy2( char *s1, const char *s2 ){

    for ( ; (*s1 = *s2) != '\0'; s1++, s2++ ){
        ;
    }
}