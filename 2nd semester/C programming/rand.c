#include<stdio.h>
#include<stdlib.h> //for rand
#include<time.h> //for time fn
int main()
{
int number;
srand(time (0));//return time for diff num
number=rand()%100+1; // generate a random number 1 to 100
printf(" the num is %d",number);
return 0;
}
