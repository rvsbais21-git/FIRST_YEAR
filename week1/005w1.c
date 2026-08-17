#include <stdio.h>
int main () {
    float r;
    printf ("Enter the radius of the circle: ");
    scanf ("%f", &r);
    printf ("The area is %f cm^2.", r*r*3.14);
    return 0;
}