/*
INPUT
23 199
OUTPUT
1
*/
#include <stdio.h>
#include <math.h>
int csnt(int nc)
{
	for (int b1 = 2; b1 <= sqrt(nc); b1++) { 
		if (nc % b1 == 0) {
			return 0;
		}
	}
	return nc < 2 ?  0 : 1;
}
int ctsnt(int nc)
{
	int sum = 0;
	while (nc) {
		sum += nc % 10;
		if (!csnt(nc % 10)) {
			return 0;
		}
		nc /= 10;
	}
	return csnt(sum) ? 1 : 0;
}
int main()
{
	int a, b, k = 0;
	scanf("%d %d", &a, &b);
	for (int i = (a < b ? a : b); i <= (a < b ? b : a); i++) {
		k += csnt(i) && ctsnt(i) ? 1 : 0;
	}
	printf("%d", k);
    return 0;
}
