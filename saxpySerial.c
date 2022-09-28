#include <stdio.h>
#include <time.h>

int main() {

    int i;

    //int n = 10;
    //int n = 1000;
    int n = 100000;

    float a = 2.0;

    float x[n];
    float y[n];

    clock_t start_time, end_time;
    
    for(i = 0; i < n; i++) {

        x[i] = 1.0;
        y[i] = 2.0;

    }

    start_time = clock();
    
    for(i = 0; i < n; i++) {

        y[i] = a*x[i] + y[i];

    }

    end_time = clock();

    printf ("SAXPY time: %f\n",(double)(end_time - start_time)/ CLOCKS_PER_SEC);

    return 0;

}
