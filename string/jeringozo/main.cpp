#include <stdio.h>

int main(){

    char cadena[50];
    char jeringozo[100];
    int i=0; //se utiliza para recorrer cada carácter de la cadena original 'cadena'.
             //Cada iteración del bucle for incrementa i para pasar al siguiente carácter en cadena.
    int j=0; //se utiliza para construir la cadena jeringozo.
             //Cada vez que se copia un carácter de cadena a jeringozo, j se incrementa para apuntar
             //a la siguiente posición disponible en jeringozo.

    printf("ingrese cadena: ");
    fgets(cadena, 50, stdin);
    printf("cadena ingresada: %s \n",cadena);

    for (i=0;cadena[i] != '\0'; i++){ //El bucle recorre cada carácter de cadena hasta encontrar el carácter nulo ('\0').
            jeringozo[j]=cadena[i]; //Cada carácter de cadena se copia a jeringozo.
            j++;
        switch (cadena[i]){ //Si el carácter es una vocal (mayúscula o minúscula), se inserta una ‘p’ seguida de la misma vocal en jeringozo.
            case'a':
            case'A':
            case'e':
            case'E':
            case'i':
            case'I':
            case'o':
            case'O':
            case'u':
            case'U':
                jeringozo[j]='p'; //jeringozo[j] se convierte en ‘p’ (por ser una vocal).
                j++; //se incrementa
                jeringozo[j]=cadena[i]; //jeringozo[j] se convierte en ‘u’(o la vocal que sea).
                j++; //se incrementa a
                break;
        }



    }

    jeringozo[j]='\0';

    printf("%s",jeringozo);



    getchar();
    return 0;
}
