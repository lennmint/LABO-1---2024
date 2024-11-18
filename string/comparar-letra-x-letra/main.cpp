#include <stdio.h>

int main(){

    char cadena[]= "que miras bobo";
    char palabra[]= "que miros bobo";

    palabra[1] == cadena[1];
    palabra[2] == cadena[2];
    palabra[3] == cadena[3];
    palabra[4] == cadena[4];
    palabra[5] == cadena[5];
    palabra[6] == cadena[6];
    palabra[7] == cadena[7];
    palabra[8] == cadena[8];
    palabra[9] == cadena[9];
    palabra[10] == cadena[10];
    palabra[11] == cadena[11];
    palabra[12] == cadena[12];
    palabra[13] == cadena[13];
    palabra[14] == cadena[14];

    printf("%s",cadena,palabra);

    for (int i = 0; palabra[i] != '\0' && cadena[i] != '\0'; i++){

        printf("\n palabra[%d] %c == %c cadena[%d]", i,palabra[i],cadena[i],i);

    }


    getchar();
    return 0;

}
