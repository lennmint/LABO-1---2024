/*
    Cómo pasar a mayúscula, letra por letra
    ***/

#include<stdio.h>

int main()
{
   char cadena[]="Que miras bobo";
   //cadena[0]-= 32; // Esto está comentado, así que no afecta a la 'Q'
   cadena[1]-= 32; // Esto afecta a la 'u'
   cadena[2]-= 32; // Esto afecta a la 'e'
   //cadena[3]-= 32; // Esto está comentado, así que no afecta al espacio
   cadena[4]-= 32; // Esto afecta a la 'm'
   cadena[5]-= 32; // Esto afecta a la 'i'
   cadena[6]-= 32; // Esto afecta a la 'r'
   cadena[7]-= 32; // Esto afecta a la 'a'
   cadena[8]-= 32; // Esto afecta a la 's'
   //cadena[9]-= 32; // Esto está comentado, así que no afecta al espacio
   cadena[10]-= 32; // Esto afecta a la 'b'
   cadena[11]-= 32; // Esto afecta a la 'o'
   cadena[12]-= 32; // Esto afecta a la 'b'
   cadena[13]-= 32; // Esto afecta a la 'o'

   printf("%s",cadena);

   getchar();
   return 0;
}
