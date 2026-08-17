#include <stdio.h>
int main () {
    int A,i=0,s=0;
    printf ("Enter the number: ");
    scanf ("%d", &A);
    while (i<=A) {
        s=s+i;
        i++;
    }
    printf ("Sum: %d",s);
    return 0;
}