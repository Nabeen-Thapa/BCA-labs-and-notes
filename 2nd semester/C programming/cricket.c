#include <stdio.h>
#include <string.h>
#include<stdlib.h>
// Creating Structure Student
struct cricketer {
    char name[30];
    int run;
    float wickets;
	};
	 struct cricketer Cricketer;
int main()
{
    int i,j,temp;
    int *cricketers[10];
    printf("Enter the cricketer details:\n");
    for (i = 0; i < 20; i++) {
        cricketers[i] = (int *)malloc(sizeof(Cricketer));
        printf("CricketerName: ");
        scanf("%s", cricketers[i]->name);
        printf("Runs scored: ");
        scanf("%d", &cricketers[i]->run);
        printf("Wickets: ");
        scanf("%f", &cricketers[i]->wickets);
    }
   
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19-i; j++) {

            if(cricketers[j]->wickets> cricketers[j+1]->wickets){
                 temp= *cricketers[j];
                *cricketers[j] = *cricketers[j+1];
                *cricketers[j+1] = temp;
                }
            }
        }
    //Displaying record
    printf("Sorted by wickets:\n");
    for (i = 0; i < 20; i++) {
        printf("%s\t%d\t%f\n", cricketers[i]->name, cricketers[i]->run, cricketers[i]->wickets);
    }

    for (i = 0; i < 20; i++) {
        free(cricketers[i]);
    }
    return 0;
}
