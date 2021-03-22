#include <stdio.h>

int main()
{
    int i, num;
    unsigned long long fact=1LL;
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("%llu", fact);

    return 0;
}
