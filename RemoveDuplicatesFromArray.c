#include <stdio.h>
int main(){
    int n;
    scanf ("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d",arr[i]);
        if (i!=(n-1)){
            printf(", ");
        }}
        int dup;
     for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
             dup=arr[i];
            for(int k=j;k<n;k++){
               arr[k]=arr[k+1];
            }
            printf("\n%d",dup);
            j--;
            n--;}}}
    printf("\n");
    for (int w=0;w<n;w++){
        printf("%d",arr[w]);
        if (w!=(n-1)){
            printf(", ");
        }
    }
    }
