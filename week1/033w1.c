/*1 1 2 3 5 8 13 21 34 55*/
#include <stdio.h>
int fib(int a, int b);

int main() {
    int m;
    fib(1,1);
    return 0;
}

int fib (int a, int b) {
    int c;
    c=b;
    b=a+b;
    a=c;
    printf("%d ",b);
    fib (c,b);
    return c;
}