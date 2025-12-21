#include <stdio.h>
//const pointer
//the location can not be changed
//the data at the location can be modified
int main( void ){

    int x;
    int y;

    int *const ptr = &x;// int &x;
                        //const *ptr = &x;

//meant to fail! ONCE
    *ptr = 7;//the data stored can be changed
    ptr = &y;//the location can not be changed

}
