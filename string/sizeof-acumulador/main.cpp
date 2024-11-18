#include <stdio.h>

int main(){

    int cadena[]= {3,45,6,7,4,8,9};
    int acumulador = 0;

    for (int i=0; i<(sizeof(cadena)/sizeof(cadena[0])); i++){ //La salida del programa será la suma de todos los elementos del arreglo cadena
        acumulador+=cadena[i];
    }

    printf("suma: %d",acumulador);  //Esto se debe a que 3 + 45 + 6 + 7 + 4 + 8 + 9 = 82

    return 0;

}

