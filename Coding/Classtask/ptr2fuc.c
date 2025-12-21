#include <stdio.h>

int add( int a, int b );
int subtract( int a, int b );

int operator( int (*operation)( int ,int ), int a, int b );

void onClick();
void onRelease();

void simButton( void(*callback)() );

int main( void ){

    int a = 5;
    int b = 3;
    printf( "%d\n", operator( add, a, b ) );
    printf( "%d", operator( subtract, a, b ) );

    simButton(onClick);
    simButton(onRelease);

    
    
}

int add( int a, int b ){
    return a + b;
}

int subtract( int a, int b ){
    return a - b;
}

int operator( int(*operation)( int , int ), int a, int b ){
    return operation(a, b);
}

void onClick(){
    printf( "Play sound\n" );
}

void onRelease(){
    printf( "Stop sound\n" );
}

void simButton( void(*callback)() ){
    callback();
}
