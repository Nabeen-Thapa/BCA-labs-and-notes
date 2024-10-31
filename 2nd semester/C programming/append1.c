append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

     FILE *fp;
     fp=fopen("d:\\first.txt","w");

if(fp==NULL)
    {
       printf("file is not created");
       exit(1);
    }
      printf("file created");
      fputs("i am bca student",fp);
      fclose(fp);
return 0;

}
