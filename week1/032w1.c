#include <stdio.h>

int rev(int n);
int cou (int n);
int power (int a, int b);

int main () {
    int n=1234,m;
    m=rev(n);
    if (n==m){
        printf ("Palindrome");
    } else {
        printf ("Not a palindrome");
    }
    return 0;
}

int rev (int n) {
    int m,g;
    if (n==0) {
        return 0;
    }
    m=(power(10,cou(n)-1)*(n%10))+(rev(n/10));
    return m;
}

int cou (int n) {
    int c=0, m;
    if (n==0) {
        return 0;
    }
    m=1+cou(n/10);
    c++;
    return m;
}

int power (int a, int b) {
    int c;
    if (b==0) {
        return 1;
    }
    c=a*power (a, b-1);
    return c;
}