#include <stdio.h>
#include <string.h>

struct Participant {
    char name[50]; 
    int score;     
    int hour;      
    int minute;    
};


//helper functions
void Timetransfer(const char *timeStr, int *hour, int *minute) ;


int calScore(const char *scoreStr) ;


void bbSort(struct Participant arr[], int n) ;


int main() {

    int n;//total number of participants

    scanf("%d", &n);

    getchar();//absorb /n

    struct Participant participants[1000]; //create an array participants


    for (int i = 0; i < n; i++) {//get the input, store them in struct, processing them

        char scoreStr[20];

        char timeStr[20];  

        scanf("%s %s %s", participants[i].name, scoreStr, timeStr);//get input and store

        participants[i].score = calScore(scoreStr);//get the pure score

        Timetransfer(timeStr, &participants[i].hour, &participants[i].minute);//get the pure time

    }


    bbSort(participants, n);//sorting


    for (int i = 0; i < n; i++) {//output

        printf("%s\n", participants[i].name);
    
    }

    return 0;

}



void Timetransfer(const char *timeStr, int *hour, int *minute) {

    sscanf(timeStr, "%d:%d", hour, minute);//read from timeStr from form "X:X", store them in hour and time

}



int calScore(const char *scoreStr) {

    int score = 0;

    for (int i = 0; i < strlen(scoreStr); i++) {

        if (scoreStr[i] != ',') { 

            score = score * 10 + (scoreStr[i] - '0');//ican and ignore ,
        
        }

    }

    return score;
}



void bbSort(struct Participant arr[], int n) {

    for (int i = 0; i < n - 1; i++) {//for each participants

        for (int j = 0; j < n - i - 1; j++) {//one vs one

            struct Participant p1 = arr[j];
            struct Participant p2 = arr[j+1];


            if (p1.score != p2.score) {//comparing score

                if (p1.score < p2.score) {
                  
                    arr[j] = p2;
                    arr[j+1] = p1;

                }
            
            }

            else if (p1.hour * 60 + p1.minute != p2.hour * 60 + p2.minute) {//comparing time

                if (p1.hour * 60 + p1.minute > p2.hour * 60 + p2.minute) {

                    arr[j] = p2;
                    arr[j+1] = p1;
                
                }

            }

            else {

                if (strcmp(p1.name, p2.name) > 0) {//comparing name in lexicographic
                
                    arr[j] = p2;
                    arr[j+1] = p1;
                
                }
            
            }

        }

    }

}