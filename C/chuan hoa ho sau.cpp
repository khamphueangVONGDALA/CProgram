#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char n = 0, str[100], *pstr[100];
	gets(str);
	strlwr(str);
	for (pstr[n] = strtok(str, " "); pstr[n] != '\0'; pstr[++n] = strtok(NULL," ")){
	}
	for (int i = 1; i < n - 1; i++) 
	{
		*pstr[i] = toupper(*pstr[i]);
		printf("%s ",pstr[i]);
	}
	strupr(pstr[0]);
	*pstr[n - 1] = toupper(*pstr[n - 1]);
	printf("%s, %s", pstr[n - 1],pstr[0]);
	return 0;
}
