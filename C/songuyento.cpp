#include <stdio.h>
#include <math.h>

#define pi 3.14

int snt(long n){
	if(n<2) return 0;
	else{
		for(int i = 2; i <=sqrt(n); i++)
			if(n % i ==0) return 0;
	}
	return 1;
}

int main(){
	long n;
	scanf("%ld",&n);
	if(snt(n)) printf("1");
	else printf("0");
	return 0;	
}
