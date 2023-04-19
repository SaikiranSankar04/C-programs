// To extract substring from given index and number of characters
#include <stdio.h>
int main() {
   char s[20];
   gets(s);
   int n,m;
   printf("Enter beginning index: ");
   scanf("%d",&n);
   printf("Enter number of characters: ");
   scanf("%d",&m);
   int c=0,i=n;
   while (c<m){
       printf("%c",s[i]);
       c++;
       i++;
   }
   return 0;
}
