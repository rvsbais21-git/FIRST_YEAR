#include <stdio.h>
int main () {
    int A,B,C,D,T;
    T=A+B+C+D;
    printf ("Enter marks in A: ");
    scanf ("%d", &A);
    printf ("Enter marks in B: ");
    scanf ("%d", &B);
    printf ("Enter marks in C: ");
    scanf ("%d", &D);
    printf ("Enter marks in D: ");
    scanf ("%d", &D);

    if (A>=33&&B>=33&&C>=33&&D>=33&&T>=160) {
        printf ("Status: Pass");
    } else {
        printf ("Status: Fail");
    }
    return 0;
}