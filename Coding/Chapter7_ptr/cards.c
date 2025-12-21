#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define CARDS 52
#define FACES 13
#define SUITS 4

void shuffle ( unsigned int wdeck[][FACES] );

void deal ( unsigned int wdeck[][FACES], const char * wSuits[], const char * wFaces[] );

int main( void ){

    unsigned int deck[SUITS][FACES] = {0};//2Darr first initialization rows & columns should be both initialized

    srand(time(NULL));

    shuffle(deck);

    const char * suit[SUITS] = { "Hearts", "Diamond", "Clubs", "Spades" };
    const char * face[FACES] = { "Ace", "Deuce", "Three", "Four", "Five", 
                            "Six", "Seven", "Eight", "Nine", "Ten", 
                            "Jack", "Queen", "King" };


    deal(deck, suit, face );

}

void shuffle ( unsigned int wdeck[][FACES] ){

    for( unsigned int cards = 1; cards <= CARDS; cards ++ ){

        size_t row = 0;
        size_t column = 0;

        do{

            row = rand() % SUITS;
            column = rand() % FACES;

        }while( wdeck[row][column] != 0 );

        wdeck[row][column] = cards;

    }

}

void deal( unsigned int wdeck[][FACES], const char * wSuits[], const char * wFaces[] ){

    for( unsigned int card = 1; card <= CARDS; card ++ ){
        for ( unsigned int column = 0; column < FACES; column ++ ){//index starts from 0
            for ( unsigned int row = 0; row < SUITS; row ++ ){
                
                if ( wdeck[row][column] == card){
                    printf( "%5s of %-8s%c", wFaces[column], wSuits[row], card % 2 == 0 ? '\n' : '\t' );
                }

            }
        }
    }
}