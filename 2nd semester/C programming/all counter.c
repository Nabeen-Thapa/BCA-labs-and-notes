//word,space,number,sign counter
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void counter();
int i;
int main()
{
	
	counter();
return 0;	
}
void counter()
{
	int character,dg=0,sp=0,ch=0;
	printf("enter for count: ");
	scanf("%d",&character);
	if(strcmp(character,'a')==0 || strcmp(character,'b')==0 || strcmp(character,'b')==0)
	
	ch++;
printf("\n%d characters",ch);
//	else if(character==' ')
//	sp++;
//	else if(character=='0'||character=='1'||character=='2'||character=='3'||character=='4'||character=='5'||character=='6')
//	character=='7'||character=='8'||character=='9')
//    dg++;
    //printf("\n%d characters",ch);
//    printf("\n%d spaces",sp);
 //   printf("\n%d numbers",dg);
    
}

