#include <stdio.h>
void disp(int n) {
    if (n < 0) { 
        return;
    }
    printf("%d ",n);
    disp(n-1);
}
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Numbers from %d to 0:\n", n);
    disp(n); 
    return 0;
}
