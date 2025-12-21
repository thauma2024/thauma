#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    
    int n, a0;
    scanf("%d %d", &n, &a0);//搞不清楚为什么这个n和a0就自己出现了

    srand((unsigned int)time(NULL));


    int comdiff = 0;
    int count = 0; //把这个名字定义成time，导致和time.h里面的函数重复了

    while (count < 30) {
        
        int i = rand() % n;  


        printf("? %d\n", i);//忘记加空格
        fflush(stdout);

        int a_i;
        scanf("%d", &a_i);

      
        int diff = a_i - a0;

        if (diff < 0) {
            diff = -diff;
        }

        
        comdiff = gcd(comdiff, diff);

        count++;
    }

    printf("! %d\n", comdiff);//忘记加空格
    fflush(stdout);

    return 0;
}
//有\n无fflush-正常
//无\n有fflush-超时
//无\n无fflush-超时