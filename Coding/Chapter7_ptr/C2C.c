#include <stdio.h>
//
int main( void ){

    int x = 5;
    int y;

    const *const ptr = &x;

//meant to fail！TWICE

    *ptr  = 7;//the data stored can not be changed
    ptr = &y;//the location can not be changed
}