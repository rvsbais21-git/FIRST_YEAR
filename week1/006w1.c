#include <stdio.h>
int main () {
    int l;
    printf ("Enter the number: ");
    scanf ("%d", &l);
    if (l%97==0) {
        printf ("The number is divisible by 97.");
    } else {
       printf ("The number is not divisible by 97."); 
    }
    return 0;
}