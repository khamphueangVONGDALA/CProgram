#include<stdio.h>
#include<limits.h>
int main()
{
	int a[100],n,max1,max2,i;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max1=max2=INT_MIN;
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max2=max1;
			max1=a[i];
		}
		else if(a[i]>max2&&a[i]<max1)
		{
			max2=a[i];
		}
		
	}
	printf("%d",max2);
	return 0;
}
