#include <stdio.h>
int sump(int n);

int main () {
    int n=1234,m;
    m=sump(n);
    printf ("Sume of digits is : %d",m);
    return 0;
}

int sump(int n) {
    int m;
    if (n==0) {
        return 0;
    }

    m=(n%10)+sump(n/10);

    return m;
}