//Passing & returning array to function as a pointer- do bubble sort
#include <stdio.h>  
int * func(int *a,int n);
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for (int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int *res=func(arr,num);
    printf("Sorted array in descending order is\n");
    for (int p=0;p<num;p++){
        printf("%d\n",*(p+res));
    }
}
int * func(int *a,int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    return a;
}
