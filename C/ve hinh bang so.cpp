#include<stdio.h>

int main()
{
	int n,m,gt=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			gt++;
			printf("%d",gt);
		}
		printf("\n");
	}
}

