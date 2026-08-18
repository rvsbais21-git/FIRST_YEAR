#include <stdio.h>

int cou (int n);

int main () {
    int n=12345,m;
    m=cou(n);
    printf ("Number of digits: %d",m);
    return 0;
}

/*we need an n now we / by 10, then add a count++ everytime it happens and entire thing 
stops at n==0*/

int cou (int n) {
    int c=0, m;
    if (n==0) {
        return 0;
    }
    m=1+cou(n/10);
    c++;
    return m;
}

/*this one required help.*/