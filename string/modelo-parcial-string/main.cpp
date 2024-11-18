#include <stdio.h>

int main(){

    char cadena[100]; //pido 100 espacios

    printf("ingrese cadena: ");
    fgets(cadena, 100, stdin);
    printf("cadena ingresada: %s \n",cadena);

    for (int i=0;cadena[i] != '\0'; i++){
        switch (cadena[i]){
            case'a':
            case'A':
                cadena[i] = '1';
		break;
            case'e':
            case'E':
                cadena[i] = '3';
		break;
            case'i':
            case'I':
                cadena[i] = '5';
		break;
            case'o':
            case'O':
                cadena[i] = '7';
		break;
            case'u':
            case'U':
                cadena[i] = '9';
		break;
        }



    }

    printf("%s",cadena);

    getchar();
    return 0;

}
