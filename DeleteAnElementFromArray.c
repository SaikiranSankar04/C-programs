// deletion of element in an array
#include <stdio.h>

int main() {
    int n,elt,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements:\n ");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter element to be deleted: ");
    scanf("%d",&elt);
    
    int c=0;
    for (int i=0;i<n;i++){
        if (arr[i]==elt){
            c=1;
            for (int j=i+1;j<n;j++){
                arr[i]=arr[j];
            }
            break;
        }
    }
    if (c==1){
    printf("New array is:\n");
    for (int i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }}
    else{
        printf("Element to be deleted not found");
    }
}
