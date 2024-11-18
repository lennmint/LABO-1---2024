#include <stdio.h>

int main(){

    char cadena[50];
    char jeringozo[100];
    int i=0; //se utiliza para recorrer cada car�cter de la cadena original 'cadena'.
             //Cada iteraci�n del bucle for incrementa i para pasar al siguiente car�cter en cadena.
    int j=0; //se utiliza para construir la cadena jeringozo.
             //Cada vez que se copia un car�cter de cadena a jeringozo, j se incrementa para apuntar
             //a la siguiente posici�n disponible en jeringozo.

    printf("ingrese cadena: ");
    fgets(cadena, 50, stdin);
    printf("cadena ingresada: %s \n",cadena);

    for (i=0;cadena[i] != '\0'; i++){ //El bucle recorre cada car�cter de cadena hasta encontrar el car�cter nulo ('\0').
            jeringozo[j]=cadena[i]; //Cada car�cter de cadena se copia a jeringozo.
            j++;
        switch (cadena[i]){ //Si el car�cter es una vocal (may�scula o min�scula), se inserta una �p� seguida de la misma vocal en jeringozo.
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
                jeringozo[j]='p'; //jeringozo[j] se convierte en �p� (por ser una vocal).
                j++; //se incrementa
                jeringozo[j]=cadena[i]; //jeringozo[j] se convierte en �u�(o la vocal que sea).
                j++; //se incrementa a
                break;
        }



    }

    jeringozo[j]='\0';

    printf("%s",jeringozo);



    getchar();
    return 0;
}
