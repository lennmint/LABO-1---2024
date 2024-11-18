/*
adivina el n�mero.
m�ximo 5 intentos
el programa debe generar un n�mero aleatorio entre 1 y 20, y el usuario debe intentar adivinarlo
El programa debe indicar si el n�mero ingresado es mayor o menor que el n�mero generado
El programa debe felicitarlo si gana y terminar el juego
Si el usuario pierde despu�s de 5 intentos, el programa debe revelar el n�mero
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numUsuario, numSecreto, numMin=1, numMax=20, acumulador=0;
    srand(time(NULL)); //generador de num aleatorio

    numSecreto =  (rand()%(numMax-numMin+1))+1;
    printf("Adivine el num. Secreto!!\n");
    printf("-----------\n");

    for (int i=1; i<=5 ; i++){ //for para los 5 intentos
        acumulador++;
        printf("Intento numero: %d \n",i);
        printf("-----------\n");

        printf("Ingrese un num: ");
        scanf("%d",&numUsuario);

        if(numUsuario<numSecreto){
            printf("\nEl num ingresado por usted: %d, es menor al num. secreto",numUsuario);
        } else if(numUsuario>numSecreto) {
            printf("\nEl num ingresado por usted: %d, es mayor al num. secreto",numUsuario);

        }

        if(numUsuario == numSecreto){
            printf("\n��Felicidades!! Ha adivinado el num. secreto");
            return 0;
        }

    }

    if(acumulador==5){
        printf("\nHa utilizado los 5 intentos.");
        printf("\nEl num. secreto es: %d",numSecreto);



    }

    getchar();
    return 0;

}


