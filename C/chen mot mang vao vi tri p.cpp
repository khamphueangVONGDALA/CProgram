#include<stdio.h>
int a[100],b[100],m,n,i,p;
void nhap()
{
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}	
	scanf("%d",&p);
}
void chen()	
{
	for(i=m+n-1;i>=n+p;i--)
		a[i]=a[i-n];
	for(i=n+p-1;i>=p;i--)
		a[i]=b[i-p];
}
void xuat()
{
	for(i=0;i<m+n;i++)		
		printf("%d ",a[i]);	
}
main()
{
	nhap();
	chen();
	xuat();
}	
				
