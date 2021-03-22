#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main()
{
    char str[100], *pstr[100], n = 0;
    gets(str);
    strlwr(str);
    for (pstr[n] = strtok(str, " "); pstr[n] != '\0'; pstr[++n] = strtok(NULL, " ")) {
    }
    strupr(pstr[n - 1]);
    printf("%s, ", pstr[n - 1]);
    for (int i = 0; i < n - 1; i++) {
        *pstr[i] = toupper(*pstr[i]);
        printf("%s ", pstr[i]);
    }
    return 0;
}
