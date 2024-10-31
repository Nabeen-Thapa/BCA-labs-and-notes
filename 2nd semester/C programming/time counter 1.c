//time counter
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

void timecounter();

void main()
{
	
	timecounter();
	getch();
}

void timecounter()
{
	int H,M,S;
	printf("\t H : M : S");
	for(H=0;H<=23;H++)
	{
	for(M=0;M<=59;M++)
	{
		for(S=0;S<=59;S++)
		{
				
			printf("\n\t%d : %d : %d ",H,M,S);
			sleep(10);	
			}
		
		printf("\n\t%d : %d : %d : %d",H,M,S);
	}
	printf("\n\t%d : %d : %d : %d",H,M,S);
	
		}
}

