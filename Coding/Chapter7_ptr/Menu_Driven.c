#include <stdio.h>

void function1( int a );

void function2( int b );

void function3( int c );

int main( void ){

    unsigned int choice = 0;

    void (*f[3]) ( int ) = { function1, function2, function3 };
    //array of 3 pointers to func that take an int argument and return void

    scanf( "%u", &choice );

    while( choice <= 2 ){

        (*f[choice])(choice); // attention to the format here

        scanf( "%u", &choice );
        
    }

}


void function1( int a ){
    printf( "%dEntered, so func1 is called", a );
}

void function2( int b ){
    printf( "%dEntered, so func2 is called", b );
}

void function3( int c ){
    printf( "%dEntered, so func3 is called", c );
}