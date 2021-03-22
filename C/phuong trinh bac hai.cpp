#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta;
	float x1,x2; //ax2+bx+c=0
	scanf("%f%f%f",&a,&b,&c);
	delta=(b*b-(4*a*c));
		x1=(-b+ sqrt(delta))/(2*a);
		x2=(-b- sqrt (delta))/ (2*a);
 	if(delta<0)
		printf("NO");
	else if (delta>0)
		printf("%0.2f %0.2f",x1,x2);
	else 
		printf("%0.2f",-b/(2*a));
	return 0;
}
