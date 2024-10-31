#include<stdio.h>
#include<stdlib.h>

void main()
{
	FILE *fps;
	fps=fopen("D:\\tests.txt","r");
	if(fps==NULL)
	{
		printf("not found");
		exit(0);
	}
	else
	{
		printf("founded\n");
		fprintf(fps,"welcome This is Nabins Thapa.");
		fclose(fps);
	}
	getch();
}
