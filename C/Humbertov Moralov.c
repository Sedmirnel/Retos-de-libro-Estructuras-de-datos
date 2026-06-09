#include <stdio.h>
#include <math.h>

unsigned int HM(unsigned int n) {
    return (unsigned int)sqrt((float)n - 1) + 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Variables de entrada
    unsigned int n = 0;
    
    while(scanf("%u",&n) && n != 0) {
        printf("%u\n",HM(n));
    }    
    return 0;
}
