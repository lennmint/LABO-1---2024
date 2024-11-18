#include <stdio.h>

int main(){

    char cadena[]= "Que miras bobo";

    for (int i=0;cadena[i] != 0;i++){ // != para evitar la impresión de carácteres que no estamos ocupando
        if (cadena[i] >= 'a' && cadena[i]<='z') //es lo mismo que decir (cadena[i] >= '97' && cadena[i]<='122') por sus valores en tabla ASCII
            cadena[i]-=32;
    }

    printf("%s",cadena);

    getchar();
    return 0;

}

