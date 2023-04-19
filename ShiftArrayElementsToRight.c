//shifting elts one step right
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t=arr[n-1];
    for (int j=n;j>0;j--){
        arr [j]=arr[j-1];
    }
    arr[0]=t;
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
