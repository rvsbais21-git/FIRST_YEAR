#include <stdio.h>
int main () {
    char C;
    printf ("Enter the letter :");
    scanf ("%c",&C);
    if (C<='z' && C>='a') {
        printf ("Lower case.");
    } else if (C<='Z' && C>='A') {
        printf ("Upper case.");
    } else {
    printf ("Invalid.");        
    }
    return 0;
}