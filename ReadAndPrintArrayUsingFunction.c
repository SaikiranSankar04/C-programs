//Read & print array, find smallest number
#include <stdio.h>
int find_small(int *arr,int *n,int *min){
    int m=arr[0];
    for (int i=0;i<*n;i++){
        if (arr[i]<m){
            m=arr[i];
        }
    }
    *min=m;
    return *min;
}

void print_array(int *arr,int *n){
    printf("\n The array elements are:\n");
    for (int i=0;i<*n;i++){
        printf("%d\n",*(arr+i));
    }
}
void read_array(int *arr,int *n){
    for (int i=0;i<*n;i++){
        printf("\n%d.Enter a value: ",(i+1));
        scanf("%d",&arr[i]);
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n];
    read_array(arr,&n);
    print_array(arr,&n);
    int min=0;
    find_small(arr,&n,&min);
    printf("\nSmallest element is %d",min);
}
