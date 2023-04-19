//Function to get approximation of sinx
//sin(x)= x-((x^3)/3!)+((x^5)/(5!))...
#include <stdio.h>
#include <math.h>
void calc(float x,float *value);
int main() {
    float n;
    scanf("%f",&n);
    float res;
    calc(n,&res);
    printf("Value is %f",res);
    return 0;
}
void calc(float x,float *value){
    int co=1;
    int sign=1;
    *value=x;
    int c=1;
    while (c<=10){
        float t=0;
        sign*=-1;
        float temp=x;
        float fac=1;
        co+=2;
        for (int j=2;j<=temp;j++){
            fac*=j;
        }
        t=((sign)*(pow(x,co)))/fac;
        *value+=t;
        c+=1;
    }
}
