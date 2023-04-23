#ifndef HEADER_FILE_RANDOM
#define HEADER_FILE_RANDOM

#define _getFunc(_1, _2, _3, _4, NAME, ...) NAME
#define randInt(...) _getFunc(__VA_ARGS__, myrand_int, _, myrand_int0, myrand_int1)(__VA_ARGS__)
#define randDouble(...) _getFunc(__VA_ARGS__, myrand_double, _, myrand_double0, myrand_double1)(__VA_ARGS__)
#define randFloat(...) _getFunc(__VA_ARGS__, myrand_float, _, myrand_float0, myrand_float1)(__VA_ARGS__)

//[min, max)
int* myrand_int(int min, int max, int A[], int n);
int myrand_int0(int min, int max);
int myrand_int1(int max);

double* myrand_double(double min, double max, double A[], int n);
double myrand_double0(double min, double max);
double myrand_double1(double max);

float* myrand_float(float min, float max, float A[], int n);
float myrand_float0(float min, float max);
float myrand_float1(float max);

#endif
