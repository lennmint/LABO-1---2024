#include <stdio.h> //Incluye la biblioteca estándar de entrada y salida.
#include <stdlib.h> //Incluye la biblioteca estándar de utilidades, que contiene funciones como rand() y srand().
#include <time.h> //Incluye la biblioteca de tiempo, que contiene la función time().

int main(){

    int aleatorio;
    srand( time( NULL ) ); //Inicializa el generador de números aleatorios con el
                           //tiempo actual, asegurando que se obtenga una secuencia diferente de números aleatorios en cada ejecución del programa.
    aleatorio = rand();

    for (int i=0;i<100;i++) {
        aleatorio = ((rand()%6)+1)+((rand()%6)+1);
	/*rand() % 6: Genera un número aleatorio entre 0 y 5.
	(rand() % 6) + 1: Ajusta el rango para obtener un número entre 1 y 6, simulando el lanzamiento de un dado.
	((rand() % 6) + 1) + ((rand() % 6) + 1): Suma los resultados de dos lanzamientos de dados, generando un número entre 2 y 12.
	**/
        printf("\n El numero %d fue dado por rand", aleatorio);
    }


    getchar();
    return 0;
}
