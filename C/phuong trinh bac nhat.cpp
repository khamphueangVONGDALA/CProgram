#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==0&&b==0)
		printf("VSN");
	else if(b==0&&a!=0||a==0&&b!=0)
		printf("VN");
	else
		printf("%.2f",(float)-b/a);
	return 0;
}

