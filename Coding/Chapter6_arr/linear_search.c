#include <stdio.h>
#include <stddef.h>
#define SIZE 100

size_t search_Array( const int a[], int key, size_t size);//use size to avoid to be the same with SIZE

int main( void ){

    int key = 0;
    int a[SIZE] = {0};

    for( size_t i = 0; i < SIZE; i++){
        
        a[i] = 2 * i;

    }

    printf( "Input the key:" );

    scanf( "%d", &key );

    size_t index = search_Array( a, key, SIZE );

    if( index != -1){
        printf( "Found value at index %u\n", index );
    }else{
        printf( "Value not found" );
    }

}

size_t search_Array( const int a[], int key, size_t size){

    for( size_t j = 0; j < size; j++ ){

        if( a[j] == key ){
            return j;
        }

    }

    return -1;//if size_t type function, size_t doesn't have a sign,
                //so -1 will be transformed into a garbage value, making an error
}