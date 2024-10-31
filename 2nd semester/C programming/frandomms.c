copycontent.c
#include<stdio.h>
#include<stdlib.h>
int main()
{
  FILE *fp;
  fp=fopen("d:\\student.txt","rb+");
  if(fp==NULL)
  {
    printf("\n Error opening a file");
    exit(1);

  }
  printf("\nposition pointer=%d\n",ftell(fp));
  fseek(fp,0,2);
  printf("\nposition pointer=%d\n",ftell(fp));
  fputs("hello k 6 kahbar",fp);
  printf("\nposition pointer=%d\n",ftell(fp));
  rewind(fp);
  printf("\nposition pointer=%d",ftell(fp));
  fclose(fp);
  return 0;
}
