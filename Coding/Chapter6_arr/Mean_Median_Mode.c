#include <stdio.h>
#define SIZE 20

void mean( const int res[] );
void median( int res[] );
void mode( int fre[], int const res[] );
void bbsort( int res[] );

int main( void ){

    int fre[10] = {0};

    int res[SIZE] = { 1,5,7,2,7,
                                3,7,5,4,8,
                                3,4,6,9,3,
                                2,4,6,9,6};

    mean( res );
    median( res );
    mode( fre, res );

}

void bbsort( int res[] ){

    for( unsigned int p = 0; p < SIZE; p++){//bubble sort has to be nested
        for ( size_t i = 0; i < SIZE-1; i ++ ){
            if ( res[i] > res[i+1] ){
                int hold = res[i];
                res[i] = res[i+1];
                res[i+1] = hold;
            }
        }
    }

    printf( "\n%15s\n", "The modified array is:\n");

    for( size_t k = 0; k < SIZE; k++ ){
        printf("%d ", res[k] );
    }

}

void mean( const int res[] ){

    float total = 0.0;
    for ( size_t j = 0; j < SIZE; j++ ){

        total += (float)res[j];

    }

    printf( "\n%15s%7.3f\n","Mean Value:", (float)total/SIZE );

}

void median( int res[] ){

    printf( "\n%15s\n", "The original array is:\n");

    for( size_t k = 0; k < SIZE; k++ ){
        printf("%d ", res[k] );
    }

    bbsort( res );

    printf("\n%15s%7d\n", "Median Value", res[SIZE/2] );

}

void mode ( int fre[], const int res[] ){

    for ( size_t n = 0; n < SIZE; n++ ){

        fre[res[n]] ++;

    }

    printf("\n%15s%15s\n", "Score", "Amount" );

    for ( size_t m = 1; m < 10; m++ ){

        printf("\n%15u%7d     ", m, fre[m] );

        for( unsigned int h = 0; h < fre[m]; h++ ){
            printf( "*" );
        }

    }

    int largest = 0;
    int modeValue = 0;

    for( unsigned int rating = 0; rating < 10; rating ++ ){
        if( fre[rating] > largest ){
            largest = fre[rating];
            modeValue = rating; 
        }
    }

    printf("%15s%15d", "The mode value:", modeValue);
    

}
