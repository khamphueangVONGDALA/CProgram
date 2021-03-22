#include <stdio.h>
#define max 100
int main(){
	int n, c = 0, l = 0;
	long t;
	printf("%d",max);
	scanf("%d", &n);
	int chan[1003], le[1003];
	for(int i = 0; i < n; i++){
		scanf("%ld", &t);
		if(t % 2 == 0) chan[c++] = t;
		else le[l++] = t;
	}
	for(int i = 0; i < c; i++){
		printf("%ld ", chan[i]);
	}
	printf("\n");
	for(int i = 0; i < l; i++){
		printf("%ld ", le[i]);
	}
	return 0;
}
