/*
ENUNCIADO

Se conoce la siguiente secuencia:

S = 1/(sqrt(1) + sqrt(2)) + 1/(sqrt(2) + sqrt(3)) + ...
    + 1/(sqrt(n) + sqrt(n + 1))

Para un S dado, se quiere encontrar el número de términos en la secuencia que
resulta en ese S
*/

#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned int testCases = 0;
    unsigned long long int sequenceResult = 0, numberOfTerms = 0;
    
    scanf("%u",&testCases);
    for(int i = 1; i <= testCases; i++) {
        scanf("%llu",&sequenceResult);
        
        numberOfTerms = sequenceResult * (sequenceResult + 2);
        
        printf("%llu\n",numberOfTerms);
    }    
    return 0;
}
