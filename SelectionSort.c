// Selection sort
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos;
    for (int i=0;i<n;i++){
        int min=arr[i];
        for (int j=i;j<n;j++){
            if (arr[j]<min){
                min=arr[j];
                pos=j;
            }
            }
            int temp=arr[i];
            arr[i]=min;
            arr[pos]=temp;
        
    }
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
