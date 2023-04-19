// To check if input is number or character
#include <stdio.h>
char * check(int *a,char *t){
    if ((a>=48)&&(a<=57)){
        t="Number";
    }
    else{
        if ((a>=97)&&(a<=122)){
            t="Lowercase character";
        }
        else{
           t="Uppercase character";
        }
    }
}
int main() {
    printf("Enter a character: ");
    int n;
    char *t;
    scanf("%d",&n);
	char *v=check(&n,*t);
	puts(v);
}
