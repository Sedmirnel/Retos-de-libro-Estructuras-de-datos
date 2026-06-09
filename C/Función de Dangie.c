/*
ENUNCIADO

La función de Dangie se define así:

unsigned long long DangiesFunction(int n) {
    int i, j, k;
    unsigned long long result = 0;
    for(i = 1; i <= n - 1; i++) {
        for(j = i + 1; j <= n; j++) {
            for(k = 1; k <= j; k++) {
                result += 1;
            }
        }
    }
    return result;
}
'''

Se busca optimizar esta función para que no use un triple bucle anidado
*/

#include <stdio.h>

unsigned long long int dangiesFunction(unsigned long long int n) {
    unsigned long long int nPlus1 = n + 1, nMinus1 = n - 1;
    
    /*
    la formula es:
    
    resultado = ((n - 1) * n * (n + 1))/3
    
    Como esa multiplicacion arriba del 3 puede dar un resultado enorme, se
    aplica esa division entre 3 donde sea aplicable antes de realizar la
    multiplicacion para que el calculo se haga de forma exitosa
    */
    
    if(n % 3 == 0) {
        n /= 3;
    } else if(n % 3 == 1) {
        nMinus1 /= 3;
    } else {
        nPlus1 /= 3;
    }
    
    return n * nPlus1 * nMinus1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Variables de entrada
    unsigned int testCases = 0;
    unsigned long long int n = 0;
    
    scanf("%u",&testCases);
    for(unsigned int i = 1; i <= testCases; i++) {
        scanf("%llu",&n);
        
        printf("%llu\n",dangiesFunction(n));
    }
    return 0;
}
