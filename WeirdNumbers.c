/* Given an integer, n, perform the following conditional actions:
If  n is odd, print Weird
If  n is even and in the inclusive range of  2 to 5, print Not Weird (2,3,4,5)
If  n is even and in the inclusive range of  6 to 20, print Weird (6,7,…,19,20)
If  n is even and greater than 20, print Not Weird (21, 22..) */

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if ((n%2)!=0){
        printf("Weird");
    }
    else if ((n>1) && (n<6)){
        printf("Not Weird");
    }
    else if ((n>5) && (n<21)){
        printf("Weird");
    }
    else{
        printf("Not Weird");
    }
}

