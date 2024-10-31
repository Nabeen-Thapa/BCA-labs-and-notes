append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

     FILE *fp;
     char ch;
     fp=fopen("d:\\first.txt","r");

if(fp==NULL)
    {
       printf("file is not created");
       exit(1);
    }
    do{
        ch = getc(fp);
        printf("%c",ch);
    } while(ch!=EOF);
      //printf("file created");
     // fputs("i am bca student",fp);
      //fclose(fp);
return 0;
}
