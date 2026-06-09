/*
ENUNCIADO

Se tiene un número y se queire verificar si ese número es triangular o no

Al recibir un número, se imprime "YES" si sí es, y "NO" si no es.
Si el número es 0, se detiene la ejecución
*/

#include <stdio.h>
#include <math.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int n = 0; // Variable de entrada
    
    // Variables auxiliares
    
    unsigned long long int gauss = 0, gaussMas1 = 0;
    
    while(scanf("%llu",&n) && n != 0) {
        gauss = ((unsigned long long int)sqrt(1.0 + (double)n*8.0) - 1)/2;
        gaussMas1 = gauss + 1;
        
        /*
        La formula es:
        (gauss * gaussMas1)/2
        
        Como esa multiplicación puede dar un resultado muy grande, se
        aplica la división a cualquiera de los 2 que sea par (para mantener
        entero el resultado), para luego hacer la multiplicación entre el
        que no se dividió y el que se dividió, asi se garantiza que los
        números se mantienen manejables durante el procedimiento completo
        */
        
        if(gauss % 2 == 0) {
            gauss /= 2;
        } else {
            gaussMas1 /= 2;
        }
        
        if(gauss * gaussMas1 == n) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
