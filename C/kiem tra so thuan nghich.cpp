#include <stdio.h>

int main()
{
    int n, num, rev = 0;
    scanf("%d", &n);
    num = n; 
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }
    if(rev == num)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    return 0;
}
