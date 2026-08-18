#include <stdio.h>
int fac (int n);

int main() {
    int n=5,c;
    c=fac(n);
    printf("%d",c);
    return 0;
}

int fac (int n) {
    int s;
    if (n==1) {
        return s;
    }
    s=n*fac(n-1);
    return s;
}