#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,n,*ptr,sum=0;
	printf("ENTER NUMBER OF ELEMENTS:\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	if(ptr=NULL){
		printf("Error");
		exit(0);
	}
	printf("enter elements:\n");
	for(i=0;i<n;++i){
		scanf("%d", ptr+i);
		sum+=*(ptr+i);
	}
	printf("sum is %d",sum);
	free(ptr);
	return 0;
}

