/* Bob has "n" bags full of playing coins.
Get the count of the coins in each bag and store it on an array.
From the array, sum all the items and display the total coins with him.
input will contain:
i) value of n
ii) count of coins in each bag (one below the other)
output should contain the following:
i) count of the coins separated by comma in each bag
ii) sum of all the coins */

#include <stdio.h>
int main(){
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for (int k=0;k<n;k++){
        scanf("%d",&arr[k]);
        printf("%d",arr[k]);
        if (k!=(n-1)){
        printf(", ");
        }
        sum+=arr[k];
    }
    printf("\n%d",sum);
}
