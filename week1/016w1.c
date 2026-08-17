#include <stdio.h> 
int main () {
    int A,i=2,s=0;
    printf ("Enter the number: ");
    scanf ("%d", &A);
    while (i<A) {
        if (A%i==0) {
            s++;
        }
        i++;
    }
    if (s==0) {
        printf ("Prime.");
    } else {
        printf ("Not prime.");
    }
}