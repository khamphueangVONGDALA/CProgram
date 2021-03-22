#include<stdio.h>

int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b&&a==c)
		printf("3");
	else if(a==b||a==c||b==c)
		printf("2");
	else
		printf("1");		
	return 0;
}
