#include <stdio.h>
#include <math.h>

int thuanNghich(int n){
int tg= n;
int temp = 0;
while(n>0){
temp = temp*10+n%10;
n/=10;
}
return (temp == tg);
}
int chia10(int n){
int sum = 0;
while(n){
sum+=n%10;
n/=10;
}
return (sum%10 == 0);
}

int main()
{
int n, count = 0;
scanf("%d", &n);
for(int i = pow(10,n-1); i<pow(10, n) ; i++){
if(thuanNghich(i) && chia10(i)){
//	printf("%d ", i);	
count++;
}	
}printf("%d ", count);

return 0;
}
