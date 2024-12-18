/*
Reemplazo de vocales
cadena de car�cteres (max 100)
cambie las vocales por las siguientes letras en min�scula (a=e, e=i, i=o, o=u, u=a)
Debe mostrar la cadena resultante, manteniendo los dem�s car�cteres intactos
Las vocales deben cambiarse acorde a la consigna, sean min�sculas o may�sculas
**/

#include <stdio.h>

int main(){

    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena,100,stdin);
    printf("\nLa cadena ingresada es: %s",cadena);

    for(int i=0;cadena[i]!='\0';i++){

        switch(cadena[i]){
            case 'a':
            case 'A':
                cadena[i] = 'e';
                break;
            case 'e':
            case 'E':
                cadena[i] = 'i';
                break;
            case 'i':
            case 'I':
                cadena[i] = 'o';
                break;
            case 'o':
            case 'O':
                cadena[i] = 'u';
                break;
            case 'u':
            case 'U':
                cadena[i] = 'a';
                break;

        }

    }

    printf("La nueva cadena es: %s",cadena);

    return 0;
}
