//demonstrte of file handling in write mode
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *fpp;
fpp=fopen("D:\\text.txt","w");
if(fpp==NULL)
{
	printf("\n cant create file.");
	exit(0);
	}	
	else
{
	printf("\n crreated");
}
fputs("welcome in my file",fpp);
fclose(fpp);
return 0;
}
