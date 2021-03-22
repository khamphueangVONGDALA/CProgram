#include<stdio.h>
int main()
{
	int a[100],n,chan,le,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	chan=0;
	le=0;
	for(i=0;i<n;i++)
	{
		if(a[i]%2 == 0)
		{
			chan++;
		}
		else
		{
			le++;
		}
	}
	printf("%d %d",chan ,le);
	return 0;
}
