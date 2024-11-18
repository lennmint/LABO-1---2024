#include <stdio.h>

int main(){

    char cadena[20]; //pido 100 espacios

    printf("ingrese cadena: ");
    fgets(cadena,19,stdin);
    printf("cadena ingresada: %s \n",cadena);

    for (int i=0;cadena[i] != 0;i++){ // != para evitar la impresión de carácteres que no estamos ocupando
        printf("cadena[%d] = %c | valor ASCII= %d\n",i,cadena[i],cadena[i]);
        if (cadena[i] >= 'a' && cadena[i]<='z') //es lo mismo que decir (cadena[i] >= '97' && cadena[i]<='122') por sus valores en tabla ASCII
            cadena[i]-=32;
    }

    printf("%s \n",cadena);

    for (int i=0;cadena[i] != 0;i++){ // != para evitar la impresión de carácteres que no estamos ocupando
        printf("cadena[%d] = %c | valor ASCII= %d\n",i,cadena[i],cadena[i]);
        if (cadena[i] >= 'A' && cadena[i]<='Z') //es lo mismo que decir (cadena[i] >= '97' && cadena[i]<='122') por sus valores en tabla ASCII
            cadena[i]+=32;
    }

    printf("%s",cadena);

    getchar();
    return 0;

}

/*
#include <stdio.h>

int main(){

    char cadena[100]; //pido 100 espacios

    printf("ingrese cadena: ");
    gets(cadena);
    printf("cadena ingresada: %s \n",cadena);

    for (int i=0;cadena[i] != 0;i++){ // != para evitar la impresión de carácteres que no estamos ocupando
        printf("cadena[%d] = %c | valor ASCII= %d\n",i,cadena[i],cadena[i]);
        if (cadena[i] >= 'a' && cadena[i]<='z') //es lo mismo que decir (cadena[i] >= '97' && cadena[i]<='122') por sus valores en tabla ASCII
            cadena[i]-=32;
    }

    printf("%s \n",cadena);

    for (int i=0;cadena[i] != 0;i++){ // != para evitar la impresión de carácteres que no estamos ocupando
        printf("cadena[%d] = %c | valor ASCII= %d\n",i,cadena[i],cadena[i]);
        if (cadena[i] >= 'A' && cadena[i]<='Z') //es lo mismo que decir (cadena[i] >= '97' && cadena[i]<='122') por sus valores en tabla ASCII
            cadena[i]+=32;
    }

    printf("%s",cadena);

    getchar();
    return 0;

}
**/
