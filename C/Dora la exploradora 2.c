#include <stdio.h>
#include <stdbool.h>

void newline() { printf("\n"); }

bool isOdd(unsigned long long int n) { return n % 2 == 1; }

unsigned long long int triangularNumberN(unsigned int n) {
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
    unsigned long long int x = 0, y = 0;
    
    // Variables auxiliares
    unsigned long long int d = 0, t = 0;
    
    while(scanf("%llu %llu",&x,&y) && x != 0 && y != 0) {
        d = x + y - 1;
        t = triangularNumberN(d - 1);
        
        if(isOdd(d)) {
            printf("%llu",y + t);
        } else {
            printf("%llu",x + t);
        } newline();
    }
    
    return 0;
}