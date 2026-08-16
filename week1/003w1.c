#include <stdio.h>
int main() {
    int p,r,t;
    printf ("Enter the principal amount: ");
    scanf ("%d",&p);
    printf ("Enter the rate of interest: ");
    scanf ("%d",&r);
    printf ("Enter the time: ");
    scanf ("%d",&t);
    printf ("Total amount after %d years: %d", t, p+((p*r*t)/100));
    return 0;
}