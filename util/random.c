#include <stdlib.h>
#include <time.h>

int* myrand_int(int min, int max, int* A, int n)
{
    srand(time(NULL));
    for (int k=0; k < n; ++k)
    {
        *(A+k) = rand() % (max - min);
        *(A+k) += min;
    }
    return A;
}

int myrand_int0(int min, int max)
{
    int *A;
    myrand_int(min, max, A, 1);
    return *A;
}

int myrand_int1(int max)
{
    return myrand_int0(0, max);
}

double* myrand_double(double min, double max, double* A, int n)
{
    // TODO
    return A;
}

double myrand_double0(double min, double max)
{
    double* A;
    myrand_double(min, max, A, 1);
    return *A;
}

double myrand_double1(double max)
{
    return myrand_double0(0, max);
}

float* myrand_float(float min, float max, float* A, int n)
{
    // TODO
    return A;
}

float myrand_float0(float min, float max)
{
    float* A;
    myrand_float(min, max, A, 1);
    return *A;
}

float myrand_float1(float max)
{
    return myrand_float0(0, max);
}
