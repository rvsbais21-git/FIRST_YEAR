#include <stdio.h>

int comp3(int a, int b, int c);

int main() {

    int l, b, c;
    printf ("Enter the 1 no: ");
    scanf ("%d", &l);
    printf ("Enter the 2 no: ");
    scanf ("%d", &b);
    printf ("Enter the 3 no: ");
    scanf ("%d", &c);

    printf ("Sum is: %d\n", l+b);

    int u;
    u=comp3(l,b,c);
    printf("Greatest number is: %d\n",u);


    int p,r,t;
    printf ("Enter the principal amount: ");
    scanf ("%d",&p);
    printf ("Enter the rate of interest: ");
    scanf ("%d",&r);
    printf ("Enter the time: ");
    scanf ("%d",&t);
    printf ("Total amount after %d years: %d", t, p+((p*r*t)/100));

    printf ("Checking if l is odd/even: ");
    if(l%2==0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }

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

int comp3(int a, int b, int c) {
    int s;
    s=a;
    if(s>=b) {
        s=b;
    }
    if (s>=c) {
        s=c;
    }
    return s;
}