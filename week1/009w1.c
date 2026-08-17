#include <stdio.h>
int main () {
    int A;
    printf("Enter year: ");
    scanf("%f", &A);
    if (A%4==0) {
        printf ("Leap year.");
    } else {
        printf ("Not leap year.");
    }
    return 0;
}