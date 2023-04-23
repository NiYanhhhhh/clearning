#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../tictoc.h"
#include "../util/random.h"

void insertion_sort(int[], int n);
void merge_sort(int[], int n);
void print_array(int[], int n);

int main(int argc, char *argv[])
{
    int n = 10;
    int A[n];
    randInt(0, 10, A, n);
    printf("[Generated array]:\n");
    print_array(A, n);

    printf("[insert-sort]:\n");
    tic;
    insertion_sort(A, n);
    toc;
    printf("result:\n");
    print_array(A, n);


    return 0;
}

// functions
void print_array(int A[], int n)
{
    for (int k=0; k < n-1; ++k)
    {
        printf("%d ", A[k]);
    }
    printf("%d\n\n", A[n-1]);
}

void insertion_sort(int A[], int n)
{
    if (n < 2) 
        return;

    for (int j=1, candidate; j < n; ++j) {
        candidate = A[j];
        int pos = j;
        while (A[pos-1] < candidate && pos >= 0) {
            A[pos] = A[pos-1];
            --pos;
        }
        A[pos] = candidate;
    }
}


void merge_sort(int A[], int n)
{

}
