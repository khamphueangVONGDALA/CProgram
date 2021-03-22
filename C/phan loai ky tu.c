#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size
int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int chu,so,ktu;
    chu = so = ktu = 0;  
    gets(str);
    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            chu++;
        else if(*s>='0' && *s<='9')
            so++;
        else
            ktu++;
        s++;
    }
    printf("%d %d %d",so,chu,ktu);
    return 0;
}
