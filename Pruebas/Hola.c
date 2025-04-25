#include <stdio.h>
#include "omp.h"

int main(){

        printf("\n############");
        printf("## Test OMP ##");
		printf("\n############\n");

        int noProc = omp_get_num_procs();
        printf("\nNumero de procesadores encontrados: %d\n", noProc);

        int noHilos = 10;
        omp_set_num_threads(noHilos);

        printf("\nHilos actuales: %d\n", omp_get_num_threads());

        printf("\nAntes de la directiva parallel\n\n");
        #pragma omp parallel
        {
                int idHilo = omp_get_thread_num();
                printf("Hilo %d de %d hilo(s)\n", idHilo, omp_get_num_threads());
        }

        printf("\nDespues de directiva parallel\n");

        printf("\nHilos actuales: %d\n\n", omp_get_num_threads());
        return 0;
}