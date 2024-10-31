//file handling using read mode
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s[15];
	fp=fopen("D:\\test.txt","r");
	if(fp==NULL)
	{
		printf("not found");
		exit(1);
	}
	else
	{
		printf("\n found\n");
		fgets(s,10,fp);
		printf("%s",s);
		fclose(fp);
		return 0;
	}
}
