#include <stdio.h>

int main(){

    char cadena[20];
    char palabra[] = "Que mira bobo";

    printf("> Ingrese cadena: ");

    fgets(cadena,20,stdin);
    printf("cadena ingresada: %s",cadena);
    int respuesta = 1;

    for (int i=0; palabra[i] != 0; i++){
        printf("palabra[%d] %c == %c cadena[%d]", i,palabra[i],cadena[i],i);
        if (palabra[i]==cadena[i])
            printf("Si\n");
        else{
            printf("No\n");
            respuesta = 0;
        }
    }

    if (respuesta==1) {
        printf("Si, la cadena es igual a la palabra");
    } else {
        printf("No, la cadena no es igual a la palabra");
    }

    getchar();
    return 0;
}

