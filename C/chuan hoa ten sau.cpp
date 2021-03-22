#include<stdio.h>
#include<string.h>
#define max 100
 
void chuanhoa(char s[]){
    strlwr(s);
    char *p[max];
    int n=0;
    char *pp = strtok(s, " ");
    while(pp!=NULL){
        pp[0]-=32;
        p[n++]=pp;
        pp=strtok(NULL, " ");
    }  
    if(n>=2){
        for(int i=0;i<n-2;i++)
            printf("%s ", p[i]);
        printf("%s", p[n-2]);
    }
    printf(", %s", strupr(p[n-1]));
}
 
int main(){
    char s[max];
    gets(s);
    chuanhoa(s);
    return 0;
}
