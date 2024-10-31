#include<stdio.h> 

int main() 

{ 

int n,i,j,c,cnt=0; 

for(i=1;;i++) 

{ 

c=0; 

for(j=1;j<=i;j++) 

{ 

if(i%j==0) 

c++; 

} 

if(c==2) 

{ 

printf("%d ",i); 

cnt++; 

if(cnt==20) 

break; 

} 

} 

return 0; 

}
