//a+.c
#include<stdio.h>
#include<stdlib.h>
int main()
{

 FILE *fp;
char st;
fp=fopen("D:\\abc.txt","a+");
if (fp==NULL)
{
    printf("file not opened");
    exit(1);

}
fputs("i love file handling",fp);
rewind(fp);
do{
    st = fgetc(fp);
    printf("%c",st);

}while(st!=EOF);

    fclose(fp);
    return 0;
}
