#include<stdio.h>
int dig[]={1,1,2,6,4,2,2,4,2,8};
int lastDigit(int n)
{
	if (n<10)
		return dig[n];
	if (((n/10) % 10) % 2 == 0)
		return (6*lastDig(n/5)*dig[n%10])%10;
	else
		return (4*lastDig(n/5)*dig[n%10])%10;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",lastDig(n));
	return 0;
}
