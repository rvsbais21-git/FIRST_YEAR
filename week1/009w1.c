#include <stdio.h>
int main () {
    int A;
    printf("Enter year: ");
    scanf("%f", &A);
    if (A%4==0 && A&100!=0) {
        printf ("Leap year.");
} else if (A%4==0 && A%100==0 && A%400=0) {
    ("Leap year.");
} 
    else {
        printf ("Not leap year.");
    }
    return 0;
}