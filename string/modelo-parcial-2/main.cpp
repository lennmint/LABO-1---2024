/*
Escribir un programa que lea una cadena de caracteres (máximo 100 caracteres)  y le
cambie todas las letras por la letra siguiente en el alfabeto (por ejemplo, la letra "b" se cambia por "c",
la letra "c" se cambia por "d", etc. en el caso particular la letra "z" se cambia por "a")
El programa debe mostrar la cadena resultante por pantalla. (no es necesario tener en cuenta las vocales con tilde)

Ejemplo de entrada:
"¿Que mira Bobo?"

Ejemplo de salida:
"¿Rvf njsb Cpcp?"

Ejemplo de entrada:
"Hola Mundo!!!"

Ejemplo de salida:
"Ipmb Nvoep!!!"
**/
#include <stdio.h>

int main(){

    char cadena[100];
    char nuevacadena[100];
    int j=0;

    printf("Ingrese una cadena de caracteres> ");
    fgets(cadena, 100, stdin);
    printf("Ha ingresado la cadena: %s",cadena);

    for (int i=0; cadena[i] != '\0'; i++){
        if ((cadena[i]>='a' && cadena[i]<='y') || (cadena[i]>='A' && cadena[i]<='Y'))
            cadena[i]++;
        else
            if (cadena[i]=='z' || cadena[i]=='Z')
                cadena[i]-=25;
    }

    printf("Cadena nueva: %s",cadena);
    return 0;
}
