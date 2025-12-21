#include <stdio.h>

void cubeByrefer ( int *aPtr );
int cubeByvalue ( int a );

int main( void ){

    int a = 7;
    int * aPtr = &a;// understand it as int*   aPtr = &a

    printf( "The value of a: %d\n", a );
    printf( "The value of aPtr: %p\n", aPtr );

    printf( "The address of a is %p\n", &a );
    printf( "The value of *aPtr is %d\n", *aPtr );

    printf( "*&aPtr:%p\n", *&aPtr );
    printf( "&*aPtr:%p\n", &*aPtr );

    printf( "\n\nCubebyValue:%d; The value of a: %d\n", cubeByvalue( a ), *aPtr ); 

    cubeByrefer( aPtr ); //or cubeByrefer( &a );
    printf( "\nCubebyReference:%d; The value of a:%d\n", a, a);

}


int cubeByvalue( int a ){
    return a * a * a; 
}

void cubeByrefer( int *aPtr ){
    *aPtr = *aPtr  *  *aPtr  *  *aPtr;
}
