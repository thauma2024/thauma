#include <stdio.h>

float series( float r1, float r2){
    float Rs = r1 + r2;

    return Rs;
}//series resisitance

float parallel( float r1, float r2 ){
    float Rp = (r1 * r2) / ( r1 + r2 );

    return Rp;
}//parallel resistance


float Ohm_law(float U, float R){
    float I = U / R;

    return I;
}//to calculate the current



int main( void ){

    float R1, R2, R3, R4, R5, R6, R7, R8;//define resistance

    float Rl, Rm, Rr;//define resistance of different branches

    float U, I, R;//define the physical quantity

    U = 12.0 ;

    scanf( "%f %f %f %f %f %f %f %f", &R1, &R2, &R3, &R4, &R5, &R6, &R7, &R8);//input

    Rl = series( R1, R2 );//left branch resistance

    Rm = parallel( R3, R4 );//middle branch resistance

    Rr = series( R5, series( parallel( R6, R7 ), R8 ) );//right branch resistance

    R = parallel( parallel( Rl, Rm ), Rr );//total resistance

    I = Ohm_law( U, R );//calculate the current by Ohm law

    printf( "%.2f", 1000*I );//output
    
}