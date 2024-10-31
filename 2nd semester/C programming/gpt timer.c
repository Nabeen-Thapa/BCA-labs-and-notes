#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h> // for Windows only

int main()
{
    clock_t start_time, end_time;
    double elapsed_time;

    start_time = clock(); // get start time

    // Do some task for which you want to measure the time

    end_time = clock(); // get end time

    elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;
    printf("Elapsed time: %f seconds\n", elapsed_time);

    return 0;
}

