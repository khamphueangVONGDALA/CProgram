#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i%2==0)
			printf("0");
			else
			printf("1");
		}
		printf("\n");
	}
	
	return 0;
}
