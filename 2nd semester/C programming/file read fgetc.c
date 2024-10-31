//file handling using read mode
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s[15];
	char ch;
	fp=fopen("D:\\test.txt","r");
	if(fp==NULL)
	{
		printf("not found");
		exit(1);
	}
	else
	{
		printf("\n found\n");
		do
		{
			ch=fgetc(fp);
			printf("%c",ch);
		}
		while(ch!=EOF);
		return 0;
	}
}
