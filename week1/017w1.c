#include <stdio.h>
#include <limits.h>
int main () {
    int A=4,C,i=0;
    printf ("Guess the random number between 1 and 100.\n");
    while (i<INT_MAX) {
        printf ("Enter guess: ");
        scanf ("%d",&C);
        i++;
        if (C!=A) {
            printf ("Try again.\n");
        } else {
            break;
        }
    }
    printf ("Correct number %d guessed in %d attempts.",A,i);
    return 0;
}