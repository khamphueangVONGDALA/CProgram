#include<stdio.h>
int a[50][50],b[50][50],c[50][50]={0},m,n,i,j,l;

void nhap()
{
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}	
}
void cvi()
{
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[j][i]=a[i][j];
}
void tinh()			
{
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			for(l=0;l<n;l++)
				c[i][j]+=a[i][l]*b[l][j];
}					
void xuat(int d[][50],int x,int y)
{
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
			printf("%d ",d[i][j]);
				printf("\n");
	}
}			
main()
{
	nhap();
	cvi();
	tinh();
	xuat(c,m,m);
}	
