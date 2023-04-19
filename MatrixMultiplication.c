//matrix multiplication
#include <stdio.h>
int main(){
    int n,r1,r2,c1,c2;
    printf("Enter number of rows of matrix 1: ");
    scanf("%d",&r1);
    printf("Enter number of columns of matrix 1: ");
    scanf("%d",&c1);
    printf("Enter number of rows of matrix 2: ");
    scanf("%d",&r2);
    printf("Enter number of columns of matrix 2: ");
    scanf("%d",&c2);
    int m1[r1][c1],m2[r2][c2];
    printf("Enter elements for matrix 1:\n ");
    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&m1[i][j]);
    }}
    printf("Enter elements for matrix 2:\n ");
    for (int i=0;i<r2;i++){
        for (int j=0;j<c2;j++){
            scanf("%d",&m2[i][j]);
    }}
    
    int m3[r1][c2];
    for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            m3[i][j]=0;
            for (int k=0;k<c1;k++){
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    
   for (int i=0;i<r1;i++){
        for (int j=0;j<c2;j++){
            printf("%d ",m3[i][j]);
    }
       printf("\n");
   }
}
