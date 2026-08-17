#include <stdio.h>
#include <limits.h>
int main () {
    int A,B,C,D;
    printf ("Enter 1st number: ");
    scanf ("%d", &A);
    printf ("Enter 2nd number: ");
    scanf ("%d", &B);
    printf ("Enter 3rd number: ");
    scanf ("%d", &C);
    printf ("Enter 4th number: ");
    scanf ("%d", &D);

    int s=INT_MIN;
    if (s<A) {
        s=A;
    } 
    if (s<B) {
        s=B;
    }
    if (s<C) {
        s=C;
    }
    if (s<D) {
        s=D;
    } 
    printf ("Greatest number: %d",s);
    return 0;
}