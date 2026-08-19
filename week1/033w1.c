/*1 1 2 3 5 8 13 21 34 55*/
#include <stdio.h>
int fib(int n);
void cou (int n);

int main() {
    int n=15, m;
    cou(n);
    return 0;
}

int fib (int n) {
    int m;
    if (n==0) {
        return 1;
    }
    if (n==1) {
        return 1;
    }
    m=fib(n-1)+fib(n-2);
    return m;
}

void cou (int n){
    int m;
    if (n==0) {
        return;
    }
    cou(n-1);
    printf("%d ",fib(n));
}