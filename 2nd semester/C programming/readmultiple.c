append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

     FILE *fp;
     char name[2][20];
     int age[2],i;

     fp=fopen("d:\\first.txt","r");

if(fp==NULL)
    {
       printf("file is not created");
       exit(1);
    }
    else{
    for(i=0;i<2;i++)
    {

      fscanf(fp,"%s%d",name[i],&age[i]);
      printf("\n%s\t%d",name[i],age[i]);

      //printf("file created");
     // fputs("i am bca student",fp);
    }
    }
      fclose(fp);
return 0;

}
