//Receive input till end is encountered and count number of letters-vowels/consonants,numbers,symbols,characters,words,lines and sentences
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int cw=0,cl=0,cc=0;
    char s[20],*p;
    char *arr[100];
    int i=0;
    while ((strcmp(s,"END"))!=0){
        gets(s);
        cl++;
        cw++;
        int n=strlen(s);
        p=(char*)malloc(n+1);
        strcpy(p,s);
        arr[i]=p;
        i++;
        for (int i=0;i<n;i++){
            if (s[i]!=' '){
                cc++;}
            if ((s[i]==' ' && s[i+1]!=' ')|(s[i-1]==46)){
                cw++;
            }
    }}
    printf("Number of lines: %d\n",cl-1);
    printf("Number of words: %d\n",cw-1);
    printf("Number of characters: %d\n",cc-3);
    return 0;
}
