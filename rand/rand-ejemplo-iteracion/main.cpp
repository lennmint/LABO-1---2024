#include <stdio.h> //Incluye la biblioteca est�ndar de entrada y salida.
#include <stdlib.h> //Incluye la biblioteca est�ndar de utilidades, que contiene funciones como rand() y srand().
#include <time.h> //Incluye la biblioteca de tiempo, que contiene la funci�n time().

int main(){

    int aleatorio;
    srand( time( NULL ) ); //Inicializa el generador de n�meros aleatorios con el
                           //tiempo actual, asegurando que se obtenga una secuencia diferente de n�meros aleatorios en cada ejecuci�n del programa.
    aleatorio = rand();

    for (int i=0;i<100;i++) {
        aleatorio = ((rand()%6)+1)+((rand()%6)+1);
	/*rand() % 6: Genera un n�mero aleatorio entre 0 y 5.
	(rand() % 6) + 1: Ajusta el rango para obtener un n�mero entre 1 y 6, simulando el lanzamiento de un dado.
	((rand() % 6) + 1) + ((rand() % 6) + 1): Suma los resultados de dos lanzamientos de dados, generando un n�mero entre 2 y 12.
	**/
        printf("\n El numero %d fue dado por rand", aleatorio);
    }


    getchar();
    return 0;
}
