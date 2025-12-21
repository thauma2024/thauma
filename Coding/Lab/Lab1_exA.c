#include <stdio.h>
#include <math.h>

int main( void )
{

    int cre_Cal, cre_IP, cre_A; //define credit

    int gra_Cal, gra_IP, gra_A; //define grade

    float GPA; //define GPA

    scanf( "%d %d %d", &cre_Cal, &cre_IP, &cre_A ); //input credits respectively

    scanf( "%d %d %d", &gra_Cal, &gra_IP, &gra_A ); //input grades respectively

    if ( gra_IP < 0 || gra_Cal < 0 || gra_A < 0 || gra_IP > 22 || gra_Cal > 22 || gra_A > 22){
        printf( "The grade points in the University of Glasgow range from 0 to 22.Please check your input and try again.");
    } //test if inputs meet the constraints requirement

    GPA = (float)(cre_Cal * gra_Cal + cre_IP * gra_IP + cre_A * gra_A) / ( cre_Cal + cre_IP + cre_A ); // calculate the GPA
   
    printf( "%d\n", (int)round(GPA) );

}