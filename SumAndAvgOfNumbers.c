// Sum and avg of numbers from m to n
#include <stdio.h>
void sumavg(int m,int n,int *sum,int *avg){
    int c=0;
    for (int i=m;i<=n;i++){
        *sum+=i;
        c++;
    }
    *avg=*sum/c;
}
int main() {
    printf("Enter the value of m: ");
    int n,m;
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum,avg;
	sumavg(m,n,&sum,&avg);
	printf("Sum=%d\n",sum);
	printf("Average=%d",avg);
	
}
