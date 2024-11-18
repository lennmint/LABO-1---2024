/*

....
(*) Año 1 – promedio general:
A = 6.89
B = 7.10
.....
(*) Año  2 – promedio general:
A = 5.90
B = 9.80
.....

Al finalizar todos los grados emitir: Total de legajos procesados. El mayor promedio de todos, año y grado (A ó B) que lo obtuvo.


**/

#include <stdio.h>

int main(){

    char grado;
    int legajo, totalLegajos;
    float mayorPromedio;

    int nota, cantNotas=0, acumulador=0;
    float promedio;

    printf("nota: ");
    scanf("%d",&nota);

    while(nota !=0 ){
        acumulador++;
        printf("nota: ");
        scanf("%d",&nota);
        cantNotas+=nota;
    }

    printf("cant: %d",cantNotas);
    printf("acum: %d",acumulador);

    promedio = (float)(cantNotas)/acumulador;

    printf("Prom: %.2f",promedio);




 /*   for (int i=0; i <= 7; i++){

            printf("Anio: %d\n",i+1);
            printf("\nIngrese legajo (mayor a 0): ");
            scanf("%d",&legajo);

            while (legajo != 0){


                printf("Ingrese grado (A/B): ");
                scanf(" %c",&grado);
                printf("Ingrese nota (1 a 10): ");
                scanf("%d",&nota);

                printf("Legajo: %d | Grado: %c | Nota: %d \n",legajo,grado,nota);
                printf("\nIngrese legajo (mayor a 0): ");
                scanf("%d",&legajo);

                cantNotas += nota;

        }
            promedio =
            printf("..........\n");
    }
    */


    return 0;
}
