#include<stdio.h>
#include<conio.h>

void nhap(int a[100][100], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
}
void xoay(int a[100][100],int b[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			b[i][j]=a[j][n-1-i];
		}
	}
}
void xuat(int b[100][100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}	
}
main()
{
	int n,a[100][100],b[100][100];
	scanf("%d",&n);
	nhap(a,n);
	xoay(a,b,n);
	xuat(b,n);
	return 0;
}
