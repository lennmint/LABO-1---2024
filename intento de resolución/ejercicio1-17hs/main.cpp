/*
club deportivo con 6 deportes
procesar la asistencia de los miembros
1-fútbol, 2-Basquet, 3-Natación, 4- Tenis,5- Atletismo, 6-Ping Pong
se ingresa x cantidad de números de legajos (mayor a 0)
finaliza al introducir un 0
por cada legajo ingresar: valor indicando si el miembro estuvo presente (1 presente, 0 ausente)
                          El programa debe emitir, por cada deporte, el porcentaje de asistencia. Por ejemplo: Fútbol – porcentaje de asistencia: 89.0%
                          Por último debe mostrar el deporte con mayor asistencia y con menor asistencia.
                          Los deportes se ingresarán en el orden mencionado, es decir: 1-Futbol, 2-Basquet, etc.


**/

#include <stdio.h>

int main(){
    int legajo;
    float mayorPorcentaje = 0;
    float menorPorcentaje = 100;
    float porcentaje;
    int deporteMayorPorcentaje, deporteMenorPorcentaje;

    for (int i = 1; i <= 6 ; i++) {
        int contPresentes=0, totalLegajos=0;
        printf("Deporte %d\n", i);
        printf("Ingrese legajo (0 para finalizar): ");
        scanf("%d", &legajo);
        while (legajo != 0) { //Bucle while para procesar los legajos
            int estado;
            printf("Ingrese 1 si estuvo presente, 0 si ausente: ");
            scanf("%d", &estado);
            if (estado == 1) {
                contPresentes++;
            }
            totalLegajos++;
            printf("Ingrese legajo (0 para finalizar): ");
            scanf("%d", &legajo);
        }
            porcentaje = ((float)contPresentes / totalLegajos) * 100;
        printf("Porcentaje de asistencia para Deporte %d: %.2f%%\n", i, porcentaje);
        if (porcentaje > mayorPorcentaje) {
            mayorPorcentaje = porcentaje;
            deporteMayorPorcentaje = i;
        }
        if (porcentaje < menorPorcentaje) {
            menorPorcentaje = porcentaje;
            deporteMenorPorcentaje = i;
        }
    }
    printf("Total de legajos procesados: %d\n", totalLegajos);
    printf("Deporte con mayor asistencia: Deporte %d - %.2f \n", deporteMayorPorcentaje, mayorPorcentaje);
    printf("Deporte con menor asistencia: Deporte %d - %.2f \n", deporteMenorPorcentaje, menorPorcentaje);

    return 0;



}
