#include <stdio.h>
int main() {
    int r,c;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    printf("Enter number of columns: ");
    scanf("%d",&c);
    int matrix[r][c];
    printf("Enter elements:\n");
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    
    int v=1;
    while (v==1){
    for (int i=1;i<r;i++) {
        for (int j=0;j<i;j++) {
            if (matrix[i][j]!=0) {
                v=0;
            }
        }
        
    }}
    int l=1;
    while (l==1){
        for (int i=0;i<r;i++) {
        for (int j=i+1;j<c;j++) {
            if (matrix[i][j]!= 0) {
                l=0;
            }
        }
    }}
    
    if (v) {
        printf("The matrix is an upper triangular matrix\n");
    } else if (l) {
        printf("The matrix is a lower triangular matrix\n");
    } else {
        printf("The matrix is neither an upper triangular nor a lower triangular matrix\n");
    }
    return 0;
}
