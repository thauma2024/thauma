#include <stdio.h>
#define SIZE 15

size_t BinarySearch ( const int a[], int key, size_t low, size_t high);
void printRow( const int a[], size_t low, size_t mid, size_t high );
void printHeader( void );

int main( void ){

    int key = 0;
    int a[SIZE] = {0};

    printf( "Input your search key:" );
    scanf( "%d", &key );

    printHeader();

    for ( size_t j = 0; j < SIZE; j++ ){

        a[j] = 2 * j;

    }

    size_t index = BinarySearch( a, key, 0, SIZE - 1 ); //查找的索引size-1

    if( index != -1 ){

        printf("\nKey %d Found at index %u\n", key, index );
    
    }else{
    
        printf("\nIndex not Found\n" );
    
    }

}

void printHeader( void ){

    puts( "\nIndices\n:" );

    for( unsigned int i = 0; i < SIZE; ++i ){
        printf( "%3u ", i );
    }

    puts( "" );

    for ( unsigned int j = 0; j < SIZE; ++j ){
        printf( "%s", "---" );
    }

    puts( "" );
}

size_t BinarySearch( const int a[], int key, size_t low, size_t high ){

    while( low <= high ){

        size_t middle = ( low + high) / 2;

        printRow( a, low, middle, high );

        if ( key == a[middle] ){
            return middle;
        }//一直else if， 如果这里断开，直接就return -1 了
        else if( key < a[low] || key > a[high] ){//不要忘了是比index 还是要比value

            return -1;
        
        }else if( key < a[middle] ){
            
            high = middle - 1;

        }else

            low = middle + 1;

        }

    return -1; 

}



void printRow( const int a[], size_t low, size_t mid, size_t high ){

    for( size_t i = 0; i < SIZE; i++ ){

        if( i < low || i > high ){
            printf( "%4s", " " );
        }
        else if( i == mid ){
            printf( "%3d*", a[i] );
        }
        else{
            printf( "%3d ", a[i] );
        }
    }

    puts( "" );
}