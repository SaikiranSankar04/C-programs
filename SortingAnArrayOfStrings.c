#include <stdio.h>
#include <string.h>
char* rearrange(char *str,int *n);
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    for (int k=0;k<n;k++){
        scanf("%s",str[k]);
    }
    char * res=rearrange(str,&n);
    for (int i=0;i<n;i++){
        printf("%s\n",*(res+i));
    }
}
    
char * rearrange(char *str,int *n){
    char t;
    for(int i=0;i<*n;i++){
        for(int j=0;j<(*n-1);j++){
            if(str[j]>str[j+1]){
                t=str[j];
                str[j]=str[j+1];
                str[j+1]=t;
            }
        }
    }
    return str;
}
