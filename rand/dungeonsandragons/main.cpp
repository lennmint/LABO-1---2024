/*
Ejercicio: �Cu�ntos dados quiere?
           �De cu�ntas caras?
           ej:
           diez dados
           tres caras
           1, 2 y 3
           me devuelve 10 n�meros random de esas caras
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //declaraci�n de variables
    int dados, caras, aleatorio;
    srand(time( NULL ));

    //ingreso de usuario
    printf("�Cuantos dados desea? >");
    scanf("%d",&dados);
    printf("�De cuantas caras los quiere? >");
    scanf("%d",&caras);

    for (int i=0; i<dados; i++){
        aleatorio = ((rand()%caras)+1);
        printf("\n Su resultado es: %d\n", aleatorio);

    }




    getchar();
    return 0;
}
