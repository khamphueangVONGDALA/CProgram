
#include <stdio.h>

int main()
{
    long long n, gt=0;
    scanf("%lld", &n);
    while(n!=0)
    {
        gt += n % 10;
        n = n / 10;
    }
    printf("%d",gt);

    return 0;
}
