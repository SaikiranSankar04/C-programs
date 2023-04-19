//string reverse,concat,compare & substring using pointers
#include <stdio.h>
#include <string.h>
int main(){
    printf("String reverse:\n");
    char s[20];
    printf("Enter a string:");
    gets(s);
    int l=strlen(s);
    char rev[l];
    int c=l-1;
    for (int i=0;i<l;i++){
        rev[i]=s[c];
        c--;
    }
    printf("Reversed string is %s",rev);
    
    printf("\nString Concat:\n");
    char s1[20],s2[20];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    strcat(s1,s2);
    printf("Resultant string is %s",s1);
    printf("\n");
    
    printf("String compare:\n");
    char s3[20],s4[20];
    printf("Enter string 1: ");
    gets(s1);
    printf("Enter string 2: ");
    gets(s2);
    int val=strcmp(s1,s2);
    if (val>0){
        printf("%s is greater than %s",s1,s2);
    }
    else if (val<0){
        printf("%s is greater than %s",s2,s1);
    }
    else{
        printf("%s is equal to %s",s1,s2);
    }
    printf("\nFinding all substrings of a string using pointers:\n");
    printf("Enter a string:\n");
    char str[20];
    gets(str);
    char *stptr=str;
    int n=strlen(str);
    for (int len=1;len<=n;len++){
        for (int i=0;i<=n-len;i++){
            int j=i+len-1;           
            for (int k=i;k<=j;k++){
               printf("%c",*(stptr+k));
            }
            printf("\n");
        }
        
    }
    }
