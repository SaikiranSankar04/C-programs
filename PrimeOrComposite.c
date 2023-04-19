// Prime or composite till -1 is entered
#include <stdio.h>
void prcomp(int n,int *v){
    for (int i=2;i<n;i++){
        if (n%i==0){
            *v=1;
            break;
        }
}}
int main() {
    int n;
    do{
        printf("\nEnter a number:");
        scanf("%d",&n);
        int val=0;
        prcomp(n,&val);
        if (val==0){
            printf("Prime\n");
        }
        else{
            printf("Composite");
        }
    }while (n!=-1);
return 0;	
}
