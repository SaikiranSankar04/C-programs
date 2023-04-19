// Insertion sort Ascending
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
    int elt;
    for (int i=1;i<n;i++){
        elt=arr[i];
        int j=i-1;
        while ((j>=0) && (arr[j]>elt)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=elt;
    }
    
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
// Insertion sort Descending
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
    int elt;
    for (int i=1;i<n;i++){
        elt=arr[i];
        int j=i-1;
        while ((j>=0) && (arr[j]<elt)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=elt;
    }
    
    printf("Sorted array is:\n");
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
