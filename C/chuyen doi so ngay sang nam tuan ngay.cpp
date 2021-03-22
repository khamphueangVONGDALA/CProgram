#include<stdio.h>

int main()
{
	int n,nam,tuan,ngay;
	scanf("%d",&n);
	nam=n/365;
	tuan=(n%365)/7;
	ngay=n-(365*nam)-(tuan*7);
	printf("%d %d %d",nam,tuan,ngay);
	
	return 0;
}
