#include <stdio.h>
#include <time.h>
#include <omp.h>

int main() {

    int i;
    
    //int n = 10;
    //int n = 1000;
    int n = 100000;

    float a = 2.0;

    float x[n];
    float y[n];

    double start_time;
    double end_time;

    for (i = 0; i < n; i++) {

        x[i] = 1.0;
        y[i] = 2.0;

    }

    start_time = omp_get_wtime();

    #pragma omp parallel for private(i)
    for (i = 0; i < n; i++) {

        y[i] = a*x[i] + y[i];

    }

    end_time = omp_get_wtime();

    printf ("SAXPY time: %f\n", end_time - start_time);

    return 0;

}
