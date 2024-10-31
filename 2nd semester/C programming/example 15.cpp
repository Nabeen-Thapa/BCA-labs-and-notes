#include<stdio.h>
struct Table
{
	int length;
	int breadth;
	int height;
};
struct Measurement
{

float meter;
float centimeter;
};
int main()
{
	struct Table tab;
	struct Measurement volume;
	printf("\nEnter the breadth and height in centimeter:\n");
	printf("\nEnter the length of table:\t");
	scanf("%d",&tab.length);
		printf("\nEnter the breadth of Table:\n");
		scanf("%d",&tab.breadth);
			printf("\nEnter the height of Table:\n");
			scanf("%d",&tab.height);
	volume.centimeter=(tab.length)*(tab.breadth)*(tab.height);
	printf("\n The volume in centimeters is %f cm^3",volume.centimeter);
	volume.meter=(tab.length/100.0)*(tab.breadth/100.0)*(tab.height/100);
	printf("\n The volume in meters is:%f m^3",volume.meter);
	return 0;
}
