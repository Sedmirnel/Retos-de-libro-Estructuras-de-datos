#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void newline() { printf("\n"); }

bool isOdd(unsigned long long int n) { return n % 2 == 1; }

unsigned int diagonalOfN(unsigned long long int n) {
    if(n == 0) {
        return 0;
    } else {
        return ((unsigned int)sqrt((double)(n - 1)*8 + 1) + 1)/2;
    }
}

unsigned long long int triangularNumberN(unsigned long long int n) {
    unsigned long long int nPlus1 = n + 1;
    
    if(isOdd(n)) {
        nPlus1 /= 2;
    } else {
        n /= 2;
    } return n * nPlus1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    //Variables de entrada
    unsigned long long int n = 0;
    
    unsigned int d = 0, coord1 = 0, coord2 = 0;
    
    while(scanf("%llu",&n) && n != 0) {
        d = diagonalOfN(n);
        n -= triangularNumberN((unsigned long long)(d - 1));
        
        coord1 = n;
        coord2 = d - (n - 1);
        
        if(isOdd(d)) {
            printf("%u %u",coord2,coord1);
        } else {
            printf("%u %u",coord1,coord2);
        } newline();
    }
    
    return 0;
}