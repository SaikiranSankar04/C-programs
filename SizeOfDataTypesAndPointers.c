// Find size of various data types and different types of pointers
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a;
    printf("Size of int : %x\n",sizeof(a));
    int *intptr;
    printf("Size of int pointer: %x\n",sizeof(intptr));
    float x;
    printf("Size of float : %x\n",sizeof(x));
    int *floatptr;
    printf("Size of float pointer: %x\n",sizeof(floatptr));
    char c;
    printf("Size of char : %x\n",sizeof(c));
    char *charptr;
    printf("Size of char pointer: %x\n",sizeof(charptr));
    double d;
    printf("Size of double : %x\n",sizeof(d));
    int *doubleptr;
    printf("Size of double pointer: %x\n",sizeof(doubleptr));
    long int i;
    printf("Size of long integer : %x\n",sizeof(i));
    int *longintptr;
    printf("Size of long integer: %x\n",sizeof(longintptr));
    return 0;
}
