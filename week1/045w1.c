#include <stdio.h>

int countChar(char *p, char target);

int main() {
    int m;
    char str[] = "banana";
    m= countChar(str, 'b');
    printf ("Number of occurences: %d",m);
    return 0;
}

int countChar(char *p, char target) {
    
    int i,t=0;
    for(i=0;*(p+i)!='\0';i++) {
        if(*(p+i)==target) {
            t++;
        }
    }
    return t;
}