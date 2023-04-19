// Evaluating power of floating point number
#include <stdio.h>
float power (float x,int n){
    int c=0;
    float pr=1.0;
    while (c<n){
        pr=pr*x;
        c++;
    }
    return pr;
}
int main() {
    float f;
    int n;
    printf("Enter value of x(float): ");
    scanf("%f",&f);
    printf("Enter value of x(int): ");
    scanf("%d",&n);
    float val=power(f,n);
    printf("Result: %f",val);
    return 0;
}
