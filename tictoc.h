#include <time.h>
#include <sys/time.h>

#ifndef HEADER_FILE_TICTOC
#define HEADER_FILE_TICTOC

clock_t __clock_begin;
struct timeval __time_begin, __time_end;

#define tic __clock_begin=clock()
#define toc printf("clock time used: %.3fms\n", (float) (clock() - __clock_begin)/CLOCKS_PER_SEC*1000)

#define timetic gettimeofday(&__time_begin, 0);
#define timetoc gettimeofday(&__time_end, 0); printf("real time used: %.3fms\n", 1000*((__time_end.tv_sec - __time_begin.tv_sec) + (__time_end.tv_usec - __time_begin.tv_usec)*1e-6))

#endif
