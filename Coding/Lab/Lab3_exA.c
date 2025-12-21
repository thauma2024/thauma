#include <stdio.h>
#include <string.h>
#include <ctype.h>

static const char *MORSE_AZ[26] = {
    ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---",
    "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-",
    "..-", "...-", ".--", "-..-", "-.--", "--.."
};

static const char *MORSE_09[10] = {
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", 
    "---..", "----."
};



int main() {

    char inText[256];
    char outMorse[4096] = "";

    int error = 0;//error note
    int i = 0;//index of input
    int space = 0;//space note
    int first = 1; //1st char tester


    fgets( inText, sizeof(inText), stdin );//get the input and its length
    inText[ strcspn(inText, "\n") ] = 0;//change \n to \0 for input



    while (inText[i] == ' ' && i < strlen(inText)) {//skip the beginning space
        i++;  
    }



    while ( i < strlen(inText) && !error ) { //processing the input one by one, i increment

        char current = inText[i];

        if ( current == ' ' ) {//note down if there is space,deal it later
        
            space = 1;
        
        } 
        else if ( isalpha(current) ) {//alphabet

            int index = toupper(current) - 'A';//to uppercase and get the index A-Z

            if ( !first && outMorse[ strlen(outMorse) - 1 ] != '/' ) {//not first and not the beginning of a word

                strcat( outMorse, " " );//add space
            
            }

            strcat( outMorse, MORSE_AZ[index] ); //add it in outmorse
            space = 0;
            first = 0;//reinitialize

        } 
        else if ( isdigit(current) ) {//digit

            int index = current - '0';//get the index 0-9
            if ( !first && outMorse[strlen(outMorse)-1] != '/' ) {//not first and not the beginning of a word

                strcat(outMorse, " ");//add space
            
            }

            strcat( outMorse, MORSE_09[index] );//add it in outmorse
            space = 0;
            first = 0;//reinitialize

        } 
        else if ( strchr( ",.;:-!?'\"", current ) != NULL ) { //test whether there is punctuations in input

            space = 0;//ignore them
        
        } 
        else {//dealing with the situation out of these 5

            error = 1;
            strcpy( outMorse, "ERROR" );
            break;

        }



        if ( i + 1 < strlen(inText) && inText[i + 1] != ' ' && space ) {//not the last and there is space in input

            strcat(outMorse, "/");//put / between words
            space = 0;

        }

        i++;//i increment

    }



    if ( space && !error ) {//use the space note to put / between words

        if ( strlen(outMorse) > 0 && outMorse[strlen(outMorse) - 1 ] != '/' ) {

            strcat( outMorse, "/" );

        }

    }


    if ( (strlen(inText) == 0) && !error ) {

        strcpy( outMorse, "" ); // initialize outMorse when inText is empty
    
    }


    puts( outMorse );//put morse out
    return 0;

}