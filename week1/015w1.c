#include <stdio.h>
int main () {
    int A,i=1,s=1;
    printf ("Enter the number: ");
    scanf ("%d", &A);
    while (i<=A) {
        s=s*i;
        i++;
    }
    printf ("Factorial: %d",s);
    return 0;
}