#include <stdio.h>
void rev(int n);

int main () {
    int n=1234;
    printf ("Reverse number is : ");
    rev(n);
    return 0;
}

void rev(int n) {
if (n==0) {
return;}
printf ("%d",(n%10));
rev(n/10);   
}