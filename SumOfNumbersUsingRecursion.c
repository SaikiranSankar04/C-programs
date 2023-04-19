//recursion to print n natural numbers
#include <stdio.h>
int sum(int n){
    if (n>1){
        return n+sum(n-1);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    int k=sum(num);
    printf("%d",k);
}
