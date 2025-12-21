#include <stdio.h>

void reverse_array( int array[], size_t size );

int main( void ){
    
    int array[8] = { 52, 7, 21, 90, 56, 25, 46, 13};

    for( size_t i = 0; i < 8; i ++ ){
        printf( "%d ", array[i] );
    }

    puts( "" );

    reverse_array( array, sizeof(array)/sizeof(array[0]) );

    for( size_t i = 0; i < 8; i ++ ){
        printf( "%d ", array[i] );
    }

}

void reverse_array( int array[], size_t size ){

    size_t start = 0;
    size_t end = size - 1;
    
    while( start < end ){//mind the condition plz! 
                        //when size is even, start will never equal to end

        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        start ++;
        end --;

    }

}