#include <stdio.h>

int main(void){
    double pi = 4;
    int times = 0;
    printf( "Enter the time that you want it to iterate :" );
    scanf( "%d", &times );

    printf( "pi = %.6f\n", pi);

    for ( int i = 1; i <= times; i ++){
        
        
        if ( i % 2 == 0 ){

            pi = pi + 4.0 / (2 * i + 1 ); //如果用 4 / ( 2 * i + 1 ), 右侧整个式子都以整数计算，结果输出为整数型，所以一定要有一个数及以上写成 .0形式

        }else{
            
            pi = pi - 4.0 / (2 * i + 1 );


        }

        printf( " pi = %.6f\n", pi );

    }
}