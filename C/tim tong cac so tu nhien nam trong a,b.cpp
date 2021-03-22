#include<stdio.h>

int main()
{
	int a,b;
	int zr=0;
	scanf("%d%d",&a,&b);
	if(a>b)
	{
	for(int i=a;i>=b;i--)
	{
		zr+=i;
		
	}
	printf("%d",zr);
	}
	else
	{
	for(int i=b;i>=a;i--)
	{
		zr+=i;
	}
	printf("%d",zr);
	}
	return 0;
}
