append.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

 FILE *fp;
//char st[15];
fp=fopen("d:\\abc.txt","w+");
if (fp==NULL)
{
    printf("file not opened");
    exit(1);

}

    fputs("i love programming",fp);
    fclose(fp);
    return 0;


}
