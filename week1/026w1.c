#include <stdio.h>
int power (int a, int b);

int main () {
    int a=2,c,b=2;
    c=power (a,b);
    printf ("answer is: %d", c);
    return 0;
}

int power (int a, int b) {
    int c;
    if (b==0) {
        return 1;
    }
    c=a*power (a, b-1);
    return c;
}
/*HERE'S WHAT HAPPENING IN MY CODE, THERE IS A C where we mutliply an A till b==0, at t
at this point we get a^b*1 then we return the c to our answer.*/