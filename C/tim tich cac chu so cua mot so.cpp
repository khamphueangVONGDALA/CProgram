#include <stdio.h>

int main()
{
    int n;
    long long product=1ll;
    scanf("%d", &n);
    while(n != 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }

    printf("%lld", product);
    return 0;
}
