#include <stdio.h>
int main () {
    int A,i;
    printf ("Enter the number: ");
    scanf ("%d", &A);
    for (i=1;i<=10;i++) {
        printf ("%d x %d = %d \n",A,i,i*A);
    }
    return 0;
}