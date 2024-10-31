#include<stdio.h>
#include<stdlib.h>
int choice,no,ch;
	int pizza=300,burger=100,vegmomo=250,samosa=40,gajarhaluwa=70;
	int chickenpizza=350,chickenmomo=300,buffmomo=280,choyala=230,chickentanduri=210;
int nonveg();
int veg();
int both_items();
int main()
{
	printf("-----------------Our item-------------------- \n");
	printf("\nchoose the item from below list\n");
	printf("  1.vegeterian items\n");
	printf("  2.non-vegeterian items\n");
	printf("  3.both items\n");
	printf("\nchoose the item: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
	veg();
	break;
	case 2:
	nonveg();
	 break;
	case 3:
		both_items();
		break;
		default:
			printf("wrong entry");
		
}
	return 0;
}
int veg()
{ 
	printf("items for vegeterian\n");
	printf("\n1. pizza \n 2. burger \n 3. veg momo \n 4. samosa \n 5. gajar haluwa\n ");
	printf("\nchoose the items\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nenter the number of pizza: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",pizza*no);
	break;
	case 2:
	printf("\nenter the number of burger: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",burger*no);
	break;
	case 3:
	printf("\nenter the number of veg momo: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",vegmomo*no);
	break;
	case 4:
		printf("\nenter the number of samosa: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",samosa*no);
	break;
	case 5:
		printf("\nenter the plates of gajar haluwa: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",gajarhaluwa*no);
		break;
		default:
			printf("wrong entry");	
	}
}
int nonveg()
{
printf("\nitems for non-vegeterian");	
printf("\n1.chicken pizza \n 2. chicken momo \n 3. buff momo \n 4. choyala \n 5. chicken tanduri ");
printf("choose the items");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nenter the number of chicken pizza: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickenpizza*no);
	break;
	case 2:
	printf("\nenter the plates of chicken momo:");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickenmomo*no);
	break;
	case 3:
	printf("\nenter the plates of buff momo: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",buffmomo*no);
	break;
	case 4:
		printf("\nenter the plates of choyala: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",choyala*no);
	break;
	case 5:
		printf("\nenter the plates of plates of chicken tanduri: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickentanduri*no);
		break; 
		default:
			printf("\nwrong entry");	
	}	
}
int both_items()
{
printf("items for both (vegeterian and non-vegeterians)");
	printf("\n 1. pizza \n 2. burger \n 3. veg momo \n 4. samosa \n 5. gajar haluwa");
	printf("\n 6. chicken pizza \n 7. chicken momo \n 8. buff momo \n 9. choyala \n 10. chicken tanduri ");
	printf("\nchoose the items\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	printf("\nenter the number of pizza: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",pizza*no);
	break;
	case 2:
	printf("\nenter the number of burger: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",burger*no);
	break;
	case 3:
	printf("\nenter the number of veg momo: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",vegmomo*no);
	break;
	case 4:
		printf("\nenter the number of samosa: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",samosa*no);
	break;
	case 5:
		printf("\nenter the plates of gajar haluwa: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",gajarhaluwa*no);
		break;
		
	
	case 6:
	printf("\nenter the number of chicken pizza: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickenpizza*no);
	break;
	case 7:
	printf("\nenter the plates of chicken momo:");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickenmomo*no);
	break;
	case 8:
	printf("\nenter the plates of buff momo: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",buffmomo*no);
	break;
	case 9:
		printf("\nenter the plates of choyala: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",choyala*no);
	break;
	case 10:
		printf("\nenter the plates of plates of chicken tanduri: ");
	scanf("%d",&no);
	printf("\nyour bill amount is %d",chickentanduri*no);
		break; 
		default:
			printf("\nwrong entry");	
	}		
		
}
