#include <stdio.h>

int main()
{
    int num, reverse = 0;
    scanf("%d", &num);
    while(num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    printf("%d", reverse);
    return 0;
}
