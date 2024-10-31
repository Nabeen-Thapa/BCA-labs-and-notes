#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fps;
	fps=fopen("D:\\tests.txt","w");
	if(fps==NULL)
	{
		printf("not found");
		exit(0);
	}
	else
	{
		printf("founded\n");
	}
		fprintf(fps,"This is Nabin's Thapa.");
		fclose(fps);
	
	return 0;
}
