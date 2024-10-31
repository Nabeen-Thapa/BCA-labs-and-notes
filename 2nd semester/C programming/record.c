append.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
FILE *fp;
int num[10],i;
fp=fopen("d:\\data.txt","w");

{
    printf("enter the num");
    for(i=0;i<10;i++)
    scanf("%d",&num[i]);
   fprintf(fp,"%d",num[i]);
   //fscanf(fp,"%d",i);
  // printf("%d",i);
}
fclose(fp);
return 0;

}
