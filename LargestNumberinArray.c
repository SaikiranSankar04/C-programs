#include <stdio.h>
int main(){
    int N,i,ln=0;
    int arr[100];
    scanf("%d (N value)",&N);
    
    printf("The array:\n");
    for (i=0;i<N;i++)
    {   
        scanf("%d\n",&arr[i]);
        printf("%d\n",arr[i]);
        if ((arr[i])>ln){
            ln=arr[i];
        }
    }
    printf("The largest number:\n");
    printf("%d",ln);
    
    
}
