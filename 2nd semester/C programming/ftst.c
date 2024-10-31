//copycontent.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fp,*fpp;
  char c[10];
  fp=fopen("D:\\record.txt","r");
  if(fp=NULL)
  {
      printf("file not found");
      exit(1);
  }
                    do
                    {
                        fscanf(fp,"%s",c);
                        printf("%s",c);
                    }while(!feof(fp));
                        fclose(fp);
                        return 0;
  }





