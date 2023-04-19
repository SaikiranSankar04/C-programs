//Read text till end is encountered
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char s[20],*p;
    char *arr[100];
    int i=0;
    while ((strcmp(s,"END"))!=0){
        gets(s);
        int n=strlen(s);
        p=(char*)malloc(n+1);
        strcpy(p,s);
        arr[i]=p;
        i++;}
    printf("\nExiting...");
    return 0;
}
