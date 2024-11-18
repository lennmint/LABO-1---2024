#include <stdio.h>

int main(){
    char cadena[200];

    printf("Ingrese una cadena: ");
    fgets(cadena, 200, stdin);

    for (int i=0; cadena[i] != '\0' ; i++){

        switch(cadena[i]){
            case 's':
                if (('s'>65)&&('s'>90)){
                    cadena[i] = cadena[i-1];
                }else if(('s'>97)&&('s'>114)&&('s'<122)){
                    cadena[i] = cadena[i-1];
                }
            case 'S':
                if (('S'>65)&&('S'>90)){
                    cadena[i] = cadena[i-1];
                }else if(('S'>97)&&('S'>114)&&('S'<122)){
                    cadena[i] = cadena[i-1];
                }
        }

    }

    printf("Su nueva cadena es: %s",cadena);

    return 0;

}
