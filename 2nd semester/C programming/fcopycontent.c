//copycontent.c
#include<stdio.h>
int main()
{
FILE *sfp,*dfp;
char sfilename[20],dfile[20];
char c;
printf("enter sourcrfile name:\t");
gets(sfilename);
printf("\n enter destination filenmae ");
gets(dfile);
sfp=fopen("D:\\record.txt","r");
if(sfp==NULL)
{
printf("\n source file cannot be created or opened");
exit(1);
}
dfp=fopen("D:\\dfile.txt","w");
if(dfp==NULL)
{
printf("\ndestination file cannot be oepned");
exit(1);

}
while((c=fgetc(sfp))!=EOF)
fputc(c,dfp);
printf("\n copied.....");
fclose(dfp);
fclose(sfp);
return 0;
}
