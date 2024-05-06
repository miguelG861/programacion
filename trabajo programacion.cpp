/*
    Algoritmo que visualiza los numeros
    del 1 al 10, utilizando el bucle
    do...while  ( haz ... mientras )
        
    Ejercicio práctico de programación en C
    con solución comentada y resuelta.
*/
// Librerias a incluir 
#include <stdio.h>
#include <stdlib.h>
// Funcion principal
int main()
{
    // Crear variables auxiliares
    int contador=0;
    
    // Inicializar el contador 
    contador=1;
    // repetir mientras que el contador tenga
    // un valor inferior a 10
    do {
        // visualizar el valor de contador
        printf("\n%d",contador);
        // incrementar contador en una unidad
        contador=contador+1;
    } while(contador<11);
    
    return 0;
}
// Se ha de tener en cuenta que el no incrementar
// el contador puede tener como consecuencia
// la ejecución de un bucle infinito y por tanto
// el bloqueo del programa.