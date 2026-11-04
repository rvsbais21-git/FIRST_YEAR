#include <stdio.h>
int sum(int n);
int fac(int n);
int max3 (int a, int b, int c);
int pow (int a, int b);
int main () {
    int a,b,c;
    printf("Enter the three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    int d;
    d=max(a,b,c);
    
    printf ("Greatest of three is: %d",d);

    d=pow(a,b);
    printf ("Too tired to make it flowery: %d",d);
    return 0;

    d=fac(a);
    printf ("Too tired to make it flowery: %d",d);

    d=sum(a);
    printf ("Too tired to make it flowery: %d",d);
    return 0;
}

int max3 (int a, int b, int c) {
    if (a>b) {
        if (a>c) {return a;} else {return c;}
    } else {
        if (b>c) {return b;} else {return c;}
    }
}

int pow (int a, int b) {
    int i,t=1;
    for (i=0;i<b;i++) {
        t=t*a;
    }
}

int fac(int n) {
    int s;
    if (n==0) {
        return 1;
    }
    s=n*fac(n-1);
    return s;
}

int sum(int n) {
    int s;
    if (n==0) {
        return 0;
    }
    s=n+sum(n-1);
    return s;
}

int fib (int n) {
    
}