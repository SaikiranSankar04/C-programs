#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    char *arr[n],sub[20];  //main array as pointer, sub array to temporarily get a single string input 
    char *ptr;          //pointer for each string in malloc
    int l;
    for (int i=0;i<n;i++){
        scanf("%s",sub);
        l=strlen(sub);
        ptr=(char*)malloc(l+1);
        strcpy(ptr,sub);
        arr[i]=ptr;
    }
    for (int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
    return 0;
}
