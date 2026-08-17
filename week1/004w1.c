#include <stdio.h>
 int main () {
    float f;
    printf ("Enter the temperature in celcius: \n");
    scanf ("%f",&f);
    printf ("The temperature in Farenheit is: %f F.", (((f*9)/5)+32)); 
    return 0;
 }