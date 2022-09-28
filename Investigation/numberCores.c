#include <stdio.h>
#include <omp.h>

int main() {

    #pragma omp parallel
    {

        printf("\nThe number of cores = %d\n\n", omp_get_num_procs());       

    }

    return 1;

}
