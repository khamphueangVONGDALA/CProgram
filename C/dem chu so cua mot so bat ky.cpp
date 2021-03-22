#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	int gt=0;
	scanf("%lld",&n);
	gt=log10(n)+1;
	printf("%d",gt);
	return 0;
}

