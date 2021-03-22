#include<stdio.h>
int main()
{
	int a[100],n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(int i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i]<min)
		{
			min=a[i];
		}
		
	}
	printf("%d %d",max,min);
	return 0;
}

