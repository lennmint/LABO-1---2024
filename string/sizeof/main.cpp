#include <stdio.h>

int main(){

    int cadena[]= {3,45,6,7,4,8,9};

    printf("sizeof (cadena[])=%d\n",sizeof(cadena));
    printf("sizeof (cadena[0])=%d\n",sizeof(cadena[0]));
    printf("sizeof (cadena[]) / sizeof(cadena[0])=%d\n",sizeof(cadena)/sizeof(cadena[0]));

    /*
    Esto confirma que el arreglo cadena tiene 7 elementos, cada uno ocupando 4 bytes, y el tama�o total del arreglo es 28 bytes.
    **/


    return 0;

}