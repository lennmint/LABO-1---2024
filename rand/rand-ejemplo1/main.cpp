#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int aleatorio;

    srand( time( NULL ) );

    aleatorio = rand();

    printf("\nEl numero %d fue dado por rand\n", aleatorio);

    printf( "%d\n", 1 + ( aleatorio % 6 ) );

    aleatorio = rand();

    printf("\nEl numero %d fue dado por rand\n", aleatorio);

    printf( "%d\n", 1 + ( aleatorio % 6 ) );


    aleatorio = rand();

    printf("\nEl numero %d fue dado por rand\n", aleatorio);

    printf( "%d\n", 1 + ( aleatorio % 6 ) );


    aleatorio = rand();

    printf("\nEl numero %d fue dado por rand\n", aleatorio);

    printf( "%d\n", 1 + ( aleatorio % 6 ) );

    getchar();
    return 0;
}
