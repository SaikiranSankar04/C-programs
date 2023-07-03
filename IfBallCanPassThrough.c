// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct details{
    char col[20];
    int dia;
    int wei;
};
int Check(int d,int w,char *c){
    int v=0;
    if (strcmp("red",c)==0){
        if (d<41){
            v=1;
        }
    }
    else if (strcmp("black",c)==0){
        if (w<3000){
            v=1;
        }
    }
    else if ((d<100)&&(w<100)){
        v=1;
    }
    return v;
}
float findvolume(int res,float *volume,int r){
    if (res==0){
        printf("Cannot be transported through the tunnel\n");
        return 0;
    }
    if (res==1){
        *volume=(4/3)*3.14*r*r*r;
        return *volume;
    }
    
    
}
int main() {
    int n;
    float vol;
    scanf("%d",&n);
    struct details *ptr,obj[n];
    ptr=(struct details*)malloc(n*sizeof(struct details));
    for (int i=0;i<n;i++){
        char tempcol[20];
        printf("Ball no %d\n",i+1);
        scanf("%d",&obj[i].dia);
        scanf("%d",&obj[i].wei);
        scanf("%s",tempcol);
        strcpy(obj[i].col,tempcol);
        int res=Check(obj[i].dia,obj[i].wei,tempcol);
        float volume=findvolume(res,&vol,(obj[i].dia)/2);
        if (volume){
            printf("The volume is %f\n",volume);
        }
    }
    return 0;
}
