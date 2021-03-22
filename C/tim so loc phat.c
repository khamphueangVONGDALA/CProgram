#include<stdio.h>
int main()
{
int n,m;
scanf("%d",&n);
do
{
	m=n%10;
	if(m==0 || m==6 || m==8)
	{
	n=n/10;
	} 
	else
	break;
}
while(n>0);
	if(n==0) 
	printf("1");
else
	printf("0");	
return 0;
}
