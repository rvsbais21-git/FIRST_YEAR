#include <stdio.h>

int ma(int n);

int main () {
        int n=1209879064,m;
    m=ma(n);
    printf ("biggest digit is: %d",m);
    return 0;
}

int ma (int n) {
    int b,m;
    if (n==0) {
        return 0;
    }
    m= ma(n/10);
    if ((n%10)>(m%10)) {
        b=n%10;
        return b;
    } else {
        b=m%10;
        return b;
    }
}