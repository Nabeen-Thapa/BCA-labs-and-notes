append.c
#include<stdio.h>
int main()
{
FILE *fp;
FILE *ofp;
 FILE *efp;
 int num[10],i;
 fp=fopen("d:\\data.txt","r");
 ofp=fopen("d:\\odd.txt","w");
 efp=fopen("d:\\even.txt","w");
 for(i=0;i<10;i++)
 {
    fscanf(fp,"%d",&num[i]);
    if(num[i]%2==0)
    fprintf(efp,"%d\t",num[i]);
    else
    fprintf(ofp,"%d\t",num[i]);
 }
 fclose(fp);
 fclose(efp);
 fclose(ofp);
 return 0;
 }
