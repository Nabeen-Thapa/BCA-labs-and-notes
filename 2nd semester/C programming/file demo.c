//demonstrte of file handling in write mode
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fp;
fp=fopen("D:\\test.txt","w");
if(fp==NULL)
{
	printf("\n cant create file.");
	exit(0);
	}	
	else
{
	printf("\n crreated");
}
fputs("i study BCA",fp);
fclose(fp);
return 0;
}
