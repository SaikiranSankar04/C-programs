#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char n[20];
    char *p;
    int l,num;
    printf("Enter number of names: ");
    scanf("%d",&num);
    char* names[num];
    for (int i=0;i<num;i++){
        scanf("%s",n);
        l=strlen(n);
        p=(char*)malloc(l+1);
        strcpy(p,n);
        names[i]=p;
    }
    char c[20];
    printf("Enter a name to check if present: ");
    scanf("%s",c);
    char *ptr=NULL;
    for (int i=0;i<num;i++){
        ptr=strstr(names[i],c);
        if (ptr!=NULL){
            printf("%s found at %d",ptr,i);
            return 0;
        }}
    printf("%s not found",c);

    return 0;
}
