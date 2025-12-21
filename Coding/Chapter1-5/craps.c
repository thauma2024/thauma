#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rollDice ( void );

enum Status { CONTINUE, WON, LOST };

int main( void ){
    srand(time( NULL ));
    
    int myPoint = 0;
    int sum = rollDice();
    enum Status gameStatus;

    switch ( sum ){

        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf( "Point is %d\n", myPoint );
            break;

    }

    while ( CONTINUE == gameStatus ){
        

        sum = rollDice();

        if ( myPoint == sum ){
            gameStatus = WON;
        }
        else{
            if ( sum == 7 ){
                gameStatus = LOST;
            }
        }
    }

    if ( WON == gameStatus ){
        printf( "Player wins.\n");
    }
    else{
        printf( "Player loses.\n");
    }
}

int rollDice( void ){
    int die1 = 1 + ( rand() % 5 );
    int die2 = 1 + ( rand() % 5 );

    printf( "Player rolled %d + %d = %d\n", die1, die2, die1 + die2 );

    return die1 + die2;
}
    