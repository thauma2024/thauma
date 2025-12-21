#include <stdio.h>

/*a XOR b = (a | b) & ~(a & b)*/
long long XOR(long long a, long long b) {
    long long or_result = a | b;       
    long long and_result = a & b;    
    long long not_and = ~and_result;  
    return or_result & not_and;      
}

int main() {
    long long n;
    scanf("%lld", &n); 

    long long xor_sum = 0;
    long long current = n;

    while (1) {
        xor_sum = XOR(xor_sum, current);
        if (current == 1) {
            break;
        }
        current = current >> 1;
    }

    printf("%lld\n", xor_sum);
    return 0;
}