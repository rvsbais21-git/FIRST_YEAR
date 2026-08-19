#include <stdio.h>

void swap(int* a, int* b);

int main () {
    int x=1231, y=123121;
    swap(&x,&y);
    printf ("x: %d \ny: %d",x,y);
    return 0;
}

void swap (int* a, int* b) {
    int t;
    t= *b;
    *b= *a;
    *a = t;
    return;
}