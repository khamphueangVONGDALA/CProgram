/*
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số của nó có chữ số cuối cùng là 8.  Viết chương trình đếm xem trong một đoạn giữa hai số nguyên cho trước có bao nhiêu số đẹp như vậy
INPUT
1 500
OUTPUT
161
*/

#include<stdio.h>
int sodep(int s){
    int temp=s, nghich=0, p, dem=0, sum=0;
    while(temp>0)
    {
        p=temp%10;
        if(p==6) dem++;
        nghich=nghich*10+p;
        sum+=p;
        temp/=10;
    }
    if(dem<1||(sum%10)!=8||nghich!=s) return 0;
    return 1;
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    for(int i=a; i<=b; i++){
        if(sodep(i)) printf("%d ", i);
    }
  
}
