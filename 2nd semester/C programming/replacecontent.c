append.c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
  FILE *fp,*fpp;
  char c[20];
  fp=fopen("d:\\record.txt","r");
  fpp=fopen("d:\\repcnt.txt","w+");
  if(fp==NULL ||fpp==NULL)
  {
      printf("file not found");
      exit(1);
  }
  while(fscanf(fp,"%s",c)!=EOF)
 {
    //printf("%s",c);
    if(strcmp(c,"sapana")==0)
         fprintf(fpp,"radha",c);
    else if(strcmp(c,"saroj")==0)
         fprintf(fpp,"loknath",c);
    else
         fprintf(fpp,"%s",c);
  }
    fclose(fp);
    fclose(fpp);
    return 0;
  }




