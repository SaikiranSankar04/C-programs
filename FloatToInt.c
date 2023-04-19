// To convert floating point number to integer
#include <stdio.h>

int main() {
    printf("Enter a floating point number: ");
    float n;
    scanf("%f",&n);
    int a;
	a = (int)(n+0.5);
	printf("The corresponding integer is:%d",a);
}
