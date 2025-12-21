#include <stdio.h>

int main(){
    int age;
    float weight;

    char f_name;
    char l_name;

    printf( "Enter your age: " );
    scanf( "%d", &age );

    getchar();//吸收换行符
    printf( "Enter your first initial: ");
    scanf( "%c", &f_name );

    getchar();//吸收换行符
    printf( "Enter your last name: ");
    scanf( "%c", &l_name );

    printf( "Enter your weight: ");
    scanf( "%f", &weight );

    printf( "Your age is %d, initials are %c%c, and weight is %f", age, f_name, l_name, weight );
    
    return 0;
}