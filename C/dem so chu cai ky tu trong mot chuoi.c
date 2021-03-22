#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;
    int alphabets, digits, others;

    alphabets = digits = others = 0;
    
    gets(str);

    while(*s)
    {
        if((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
            alphabets++;
        else if(*s>='0' && *s<='9')
            digits++;
        else
            others++;

        s++;
    }
    printf("%d %d %d", alphabets,digits,others);
    return 0;
}
