#include <stdio.h>
#include <stdlib.h> //para rand
#include <time.h> //para rand

int main(){

    int opcionComputadora;
    char opcionUsuario;
    srand(time(NULL));

    opcionComputadora = rand()%3;
    printf("Ingrese un caracter como eleccion (I - Piedra, A - papel, T - tijera. PARA SALIR: S): \n");
    scanf(" %c",&opcionUsuario);
    /*
     agregar un espacio antes del especificador de formato %c en scanf
     para que ignore cualquier espacio en blanco (incluyendo el carácter de nueva línea)
     que quede en el búfer
    **/

    while(opcionUsuario != 'S'){
        switch(opcionComputadora){
        case 0: //piedra
            printf("La computadora eligio: Piedra.\n");
            switch(opcionUsuario){
                case 'I': //piedra
                    printf("\nEl usuario eligio: Piedra.\n");
                    printf("\nEmpate.\n");
                    break;
                case 'A': //papel
                    printf("\nEl usuario eligio: Papel.\n");
                    printf("\nHa ganado el usuario.\n");
                    break;
                case 'T': //tijera
                    printf("\nEl usuario eligio: Tijera.\n");
                    printf("\nHa ganado la computadora.\n");
                    break;
            }

            break;
        case 1: //papel
            printf("\nLa computadora eligio: Papel.");
            switch(opcionUsuario){
                case 'I': //piedra
                    printf("\nEl usuario eligió: Piedra.");
                    printf("\nHa ganado la computadora.\n");
                    break;
                case 'A': //papel
                    printf("\nEl usuario eligio: Papel.");
                    printf("\nEmpate.\n");
                    break;
                case 'T': //tijera
                    printf("\nEl usuario eligio: Tijera.");
                    printf("\nHa ganado el usuario.\n");
                    break;
            }
            break;
        case 2: //tijera
            printf("\nLa computadora eligio: Tijera.");
            switch(opcionUsuario){
                case 'I': //piedra
                    printf("\nEl usuario eligio: Piedra.");
                    printf("\nHa ganado el usuario.\n");
                    break;
                case 'A': //papel
                    printf("\nEl usuario eligio: Papel.");
                    printf("\nHa ganado la computadora.\n");
                    break;
                case 'T': //tijera
                    printf("\nEl usuario eligio: Tijera.");
                    printf("\nEmpate.\n");
                    break;
            }
            break;
        default:
            printf("Opcion invalida.\n");
            break;


    }



    printf("\n---------------------------------");
    printf("\nIngrese un caracter como eleccion (I - Piedra, A - papel, T - tijera. PARA SALIR: S): \n");
    scanf(" %c",&opcionUsuario);
    /*
     agregar un espacio antes del especificador de formato %c en scanf
     para que ignore cualquier espacio en blanco (incluyendo el carácter de nueva línea)
     que quede en el búfer
    **/
    opcionComputadora = rand()%3;



    }





    getchar();
    return 0;
}
