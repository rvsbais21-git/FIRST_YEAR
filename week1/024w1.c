#include <stdio.h>
void numb(int n);
int main () {
    int n=10;
    numb(n);
    return 0;
}

void numb (int n) {
    if (n==0) {
        return;
    }
    numb(n-1);
    printf ("%d ",n);
}