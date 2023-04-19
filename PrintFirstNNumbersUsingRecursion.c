//recursion to print n natural numbers
#include <stdio.h>
int printelts(int n){
    if (n>1){
        printelts(n-1);
    }
    printf("%d ",n);
}
int main(){
    int num;
    scanf("%d",&num);
    printelts(num);
}
