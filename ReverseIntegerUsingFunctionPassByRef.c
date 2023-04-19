//Reverse integer
#include <stdio.h>
#include <math.h>
int revnum(int *num){
    int rev=0,c=0,temp=*num;
    while (temp>0){
        int d=temp%10;
        c+=1;
        temp=temp/10;
    }
    int tem=*num;
    int mul=pow(10,c-1);
    for (int j=0;j<c;j++){
        int e=tem%10;
        rev+=e*mul;
        mul/=10;
        tem/=10;
    }
    return rev;
}
int main() {
    int num;
    scanf("%d",&num);
    int r=revnum(&num);
    printf("%d",r);
    return 0;
}
