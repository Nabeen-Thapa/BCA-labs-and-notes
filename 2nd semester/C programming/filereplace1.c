#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*fpp;
	char c[10];
	fp=fopen("tests,txt","r+");
	if(fp==NULL)
	{
		printf("failed");
		exit(1);
	}
	fpp=fopen("C:\\replace.txt","w");
	if(fp==NULL)
	{
		printf("failed");
		exit(1);
	}
	while(fscaf(fp,"%s",&c)!=EOF)
	{
		if(strcmp(c,"ram"==0))
		fprintf(fpp,"hari",c);
		else if(strcmp(c,"sita"==0))
		fprintf(fpp,"gita",c);
		else if(strcmp(c,"govi"==0))
		fprintf(fpp,"lovi",c);
		else
		fprintf(fpp,"%s",c);
		
	}
	fclose(fp);
	fclose(fpp);
	getch();

}
