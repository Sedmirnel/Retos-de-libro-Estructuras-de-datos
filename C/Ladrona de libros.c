/*
ENUNCIADO

Se lee un libro y se van sumando las páginas conforme se van leyendo

Al finalizar el libro, esa suma da un resultado final, pero te das
cuenta que olvidaste contar una página.

Descubrir qué página faltó contar y de paso cuántas páginas tiene el libro
*/

#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // Variables de entrada
    unsigned int testCases = 0, badResult = 0;
    scanf("%u",&testCases);
    
    // Variables auxiliares
    unsigned int numberOfPages = 0, goodResult = 0;
    
    for(int i = 1; i <= testCases; i++) {
        scanf("%u",&badResult);
        
        numberOfPages = ((unsigned int)sqrt(1.0 + (double)badResult*8.0) - 1)/2 + 1;
        goodResult = numberOfPages*(numberOfPages + 1)/2;
        
        printf("%u %u\n", goodResult - badResult, numberOfPages);
    }
    return 0;
}