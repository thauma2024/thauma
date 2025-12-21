#include <stdio.h>
#define SIZE 10

int search_Array( int a[], size_t size, int answer );

int main( void ){
    int a[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90};

    int answer = 0;
    scanf( "%d", &answer );

    printf( "%d",search_Array ( a, SIZE, answer));
    
}

int search_Array( int a[], size_t size, int answer){

    for( size_t j = 0; j < size; j++ ){
        
        if (answer == a[j] ){
            return j;
        }
    }
    return -1;
}