#include <stdio.h>

void ch( int* p);

int main () {
    int a=25;
    ch (&a);
    printf ("changed number is: %d",a);
    return 0;
}

void ch ( int* p) {
    *p=3432 ;
    return;
}