#include <stdio.h>
#include <math.h>

unsigned int countTriangleNumbersUntilN(unsigned long long int n) {
    return (((unsigned int)sqrt(1+((double)n)*8)-1)/2);
}

unsigned int countTriangleNumbersInRange(unsigned long long int a, unsigned long long int b) {
    return countTriangleNumbersUntilN(b) - countTriangleNumbersUntilN(a - 1);
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Variables de entrada
    unsigned long long int a = 0, b = 0;
    
    while(scanf("%llu %llu",&a,&b) && (a != 0 && b != 0)) {
        printf("%u\n",countTriangleNumbersInRange(a, b));
    }
        
    return 0;
}