#include<iostream>
using namespace std;
int n,a[1000];
void nhap() 
{
 cin >> n;
 for(int i = 0; i < n; i++)
  cin >> a[i];
}

bool ktr(int t, int b[100], int m ) 
{
 for(int i = 0; i < m; i++)
 {
  if(t==b[i])
   return false;
 }
 return true;
}
int dem(int x) 
{
 int dem = 0;
 for(int i = 0; i < n; i++)
  if(a[i] == x)
   dem++;
 return dem;
}

void xuat() 
{
 int b[100],m=0,d=0;
 for(int i = 0; i < n; i++) 
 {
  if(ktr(a[i], b, m) && dem(a[i]) > 1) 
  {
   d++;
   b[m++] = a[i];
  }
 }
 for(int i = 0; i < m; i++)
  cout << b[i] << " ";
 if(d==0)
  cout << "0";
}
main() 
{
 nhap();
 xuat();
}
