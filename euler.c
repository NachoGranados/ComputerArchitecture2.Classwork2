#include <stdio.h>
#include <time.h>
#include <omp.h>

int main() {

    double e;

    int i;

    int n = 500;
    //int n = 800;
    //int n = 850;
    //int n = 900;
    //int n = 950;
    //int n = 1000;
    
    double a[n];

    double start_time;
    double end_time;

    a[0] = 1.0;

    start_time = omp_get_wtime();

    #pragma omp parallel for private(i)
    for (i = 1; i < n; i++) {

        a[i] = a[i-1] / i;

    }

    e = 1.0;

    #pragma omp parallel for private(i)
    for (i = n - 1; i > 0; i--) {

        e += a[i];

    }

    end_time = omp_get_wtime();

    printf("Euler constant e = %.16lf\n", e);

    printf ("Time: %f\n", end_time - start_time);  
    
    return 0;

}
