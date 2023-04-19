#include <stdio.h>
int CheckOddEven(int n,int *v){
    if (n%2==0){
        *v=1;
    }
    else{
        *v=0;
    }
    return v;
}
int main(){
    int num,n,v=0,Odd=0,Even=0;
    printf("How many numbers?: ");
    scanf("%d",&num);
    for (int i=0;i<num;i++){
    printf("Enter a number: ");
    scanf("%d",&n);
    CheckOddEven(n,&v);
    if (v==0){
        Odd+=n;
    }
    else{
        Even+=n;
    }}
    printf("\nSum of odd numbers is %d",Odd);
    printf("\nSum of even numbers is %d",Even);
}
