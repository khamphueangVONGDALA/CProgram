#include<stdio.h>
#include<math.h>
bool nguyento(int A){
if(A<2){return 0;
}
else if(A>2){
if(A%2==0){ return 0;
}
for(int i=2;i<=sqrt((float)A);i++){
	if(A%i==0){return 0;}	
}return 1;}}
int tatca(int n){  
do{
int m=n%10;
	if(m==2||m==3||m==5||m==7){
	n/=10;} else break;
	}while(n>0); 
	if(n==0){return 1;
	} else return 0; }

	


int main()
{ int n,m,dem=0;
scanf("%d %d",&n,&m);
	for(int j=n;j<=m;j++){
		if(nguyento(j)&&tatca(j)==1)
		{ dem++;}}
		printf("%d",dem);

	return 0;
}
