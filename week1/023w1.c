#include <stdio.h>

void print(int n);

int main () {
    int n=10;
    print(n);
    return 0;
}

void print (int n) {
    if (n==0) {return;}
    printf("%d ",n);
    print (n-1);
}