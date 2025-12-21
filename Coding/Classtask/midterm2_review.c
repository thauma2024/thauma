#include <stdio.h>
#include <string.h>

void reverse_array( int *arr, int size );

void traverse2D ( int arr[][3], size_t column, size_t row);

void strtoken( char str[]);

int main( void ){

    int array[5] = { 30019, 25, 3 };

    char array1[5] = { 'H', 'i' };

    int array2[10] = {0};

    int array_2D[][3] = { {1 , 0 , 0}, { 1, 0,1}};

    traverse2D(array_2D, 3, 2);

    for( size_t i = 0; i < 10; i++ ){
        array2[i] = i * 3;
    }

    reverse_array(array2, 10);

     for( unsigned int i = 0; i < 10; i ++ ){
        printf( "%d ", array2[i] );
    }

    char* ptr1 = array;

    printf( "%u\n" , sizeof(array) );

    printf( "%p\n%p\n", ptr1, ptr1+1 );

    printf( "%d\n%d\n", *ptr1, *(ptr1+1) );

    for( unsigned int i = 0; i < 5; i++ ){
        printf( "%c", array1[i] );
    }


    puts( "" );

    const int a = 40;
    int* ptr2 = &a;
    int** pptr2 = &ptr2;
    int*** ppptr2 = &pptr2;
    printf( "*ptr2 = %d\n", *ptr2 );
    printf( "**ptr2 = %d\n", **pptr2 );
    printf( "***ptr2 = %d\n", ***ppptr2 );

    puts("");

    // 写法1：手动加'\0'（最直观）
    //char str1[] = { 'H', 'i', '\0'}; 

    // 写法2：用双引号初始化（编译器自动加'\0'，推荐）
    //char str2[] = "Hi"; 

    // 写法3：指定数组长度，未初始化的位置自动补'\0'
    //char str3[3] = { 'H', 'i'}; 

    char stra[] = "Wocao";
    char strb[] = "Nidaba";
    char strc[] = "IPWasim";

    //char stra[] = "Wocao"; // 数组长度自动为6（'W','o','c','a','o','\0'）
    //strcat(stra, strb);    // strb是"Nidaba"（长度7），拼接后总长度6+6=12（不含重复'\0'）
    //stra 初始化后长度固定为 6，strcat 会把 strb 的内容拼到 stra 后面，但 stra 没有多余空间 
    //→ 内存越界，覆盖栈上其他数据，可能导致程序崩溃、输出异常
    printf( "%s\n", stra );
    printf( "%s\n", strb );
    printf( "%s\n", strc );
    puts( "" );
    
    printf( "%s\n", strcat(stra,strb) );
    printf( "%s\n", strncat(stra,strb,3) );//3对str2，strb的前三个
    printf( "%s\n", strcpy(stra,strc) );
    printf( "%s\n", strncpy(stra,strb,5) );//5对str2,strb的前五个

    printf( "%s\n", stra );
    printf( "%s\n", strb );

    printf( "%d\n", strcmp(stra,strb) ); //返回的是int值，a>b -> 1，a<b -> -1

    puts("");
    //新手阶段可以放心用「''是 char，""是 str」的通俗理解，但记住两个关键点：
    //'' 只能单字符，"" 自动补'\0'；
    //C 语言里没有 “str 类型”，“字符串” 只是「带'\0'的 char 数组」的别称。


    char strd[] = "Wocao,Nidaba,SB,Wasim";

    strtoken( strd );





}

void reverse_array( int *arr, int size ){
    int* start = arr;
    int* end = arr + size - 1;

    for( unsigned int i = 0; i < size; i ++ ){
        printf( "%d ", arr[i] );
    }
    puts( "" );

    while( start < end ){
        int temp = *start;
        *start = *end;
        *end = temp;
        start ++;
        end --;
    }

    for(  int i = 0; i < size; i ++ ){
        printf( "%d ", arr[i] );
    }

    puts( "" );
}

void traverse2D ( int arr[][3], size_t column, size_t row ){

    int* ptr = &arr[0][0]; 

    for( size_t i = 0; i < column * row ; i++ ){
        printf("%d ", *(ptr + i ) );

        if( i % 3 == 2 ){
            puts( "" );
        }
    }

    puts("");
}

void strtoken( char str[] ){

    char *token;
    token = strtok( str, "," );

    while( token != NULL ){
        printf( "%s\n", token );
        token = strtok( NULL, "," );
    }

}