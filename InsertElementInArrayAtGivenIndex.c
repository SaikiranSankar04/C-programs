// insertion of element in an array
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
    printf("Enter element to be inserted: ");
    scanf("%d",&elt);
    printf("Enter the index in which it has to be inserted: ");
    scanf("%d",&pos);
        for (int j=n+1;j>=pos;j--){ 
            //push all other elts one step back
            arr[j]=arr[j-1];
        }
        arr[pos]=elt;
    printf("New array is:\n");
    for (int i=0;i<n+1;i++){
        printf("%d\n",arr[i]);
    }
}
