#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char n = 0, str[100], *pstr[100];
	gets(str);
	strlwr(str);
	for (pstr[n] = strtok(str, " "); pstr[n] != '\0'; pstr[++n] = strtok(NULL, " ")){
	}
	printf("%s", pstr[n - 1]);
	for (int i = 0; i < n - 1; i++) {
		printf("%c", *pstr[i]);
	}
	printf("@ptit.edu.vn");
	return 0;
}
