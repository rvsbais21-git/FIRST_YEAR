#include <stdio.h>

int sum(int n) {
    int s=0,m=n;
    if (m==0) {
        return s;
    }
    s= m+sum(m-1);
    return s;
}

int main () {
    int n=8,m;
    m=sum(n);
    printf("Sum is: %d",m);

    return 0;
}

