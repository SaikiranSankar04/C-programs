// ascending order
//bubble sort-swapping adjacent elements if in wrong order
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
    
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
// descending order
//bubble sort-swapping adjacent elements if in wrong order
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
    
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
