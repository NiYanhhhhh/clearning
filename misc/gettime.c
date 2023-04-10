#include <stdio.h>
#include "tictoc.h"

int main () {
    // Start measuring time
    tic;
    timetic;
    
    long int n = 1000*1000*1000;
    long long int sum = 0;
    for (int i=0; i<n; sum += ++i);
    
    printf("Result: %lld\n", sum);

    // Stop measuring time and calculate the elapsed time
    toc;
    timetoc;
    
    return 0;
}
