//mean using arrays
#include <stdio.h>
void av(int arr,int n,int *avg){
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=i;
    }
    *avg=sum/n;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("\n%d.Enter a value: ",i+1);
        scanf("%d",&arr[i]);
    }
    int avg;
    av(arr,n,&avg);
    printf("The mean is : %d",avg);
}
