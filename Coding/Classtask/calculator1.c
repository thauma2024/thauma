#include <stdio.h>

int main(void){
    
    float num1 = 0;
    float num2 = 0;
    double result = 0;

    printf( "Enter real number 1:\n");
    scanf( "%f", &num1 );

    printf( "Enter real number 2:\n");
    scanf( "%f", &num2 );

    printf( "Enter the operator:\n");
    printf( "Enter the EOF character to end input.\n");
    
    int input = 0;

    while ((input = getchar()) != EOF ){
        
        switch ( input ){
            case '+':
                result = num1 + num2;
                printf( "The operation result is : %.2f", result);
                break;
            
            case '-':
                result = num1 - num2;
                printf( "The operation result is : %.2f", result);                
                break;

            case '/':
                result = num1 / num2;
                break;
            
            case '*':
                result = num1 * num2;
                printf( "The operation result is : %.2f", result);
                break;

            case ' ':
            case '\n':
            case '\t':
                break;
            
            default:
                printf("%s", "Incorrect input." );
                puts( "Enter a new grade.");
                break;
        }
    }

    
}