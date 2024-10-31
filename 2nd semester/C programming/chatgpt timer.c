#include <stdio.h>
#include <time.h>

int main() {
    int seconds;
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
    time_t start_time, current_time;
    start_time = time(NULL);
    while (1) {
    	seconds--;
    	if(seconds==0)
    	{
        current_time = time(NULL);
        if ((current_time - start_time) == seconds) {
            printf("Time's up!\n");
            break;
        }
        }
    }
    return 0;
}

