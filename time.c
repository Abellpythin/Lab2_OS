#include <sys/time.h>
#include <stdio.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    // Calculate the difference between end_time and start_time in seconds and microseconds
    struct timeval time;
    timersub(end_time, start_time, &time);
    double total_time = time.tv_sec + time.tv_usec / 1000000.0;
    return total_time;
}