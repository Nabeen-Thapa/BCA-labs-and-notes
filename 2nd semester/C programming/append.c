//append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

     FILE *fp;
     //char name[2][20];
    // int age[2],i;

     fp=fopen("d:\\first.txt","a");

if(fp==NULL)
    {
       printf("file is not created");
       exit(1);
    }
    else{
    fputs("i am learning file handling",fp);
    }
      fclose(fp);
return 0;

}
