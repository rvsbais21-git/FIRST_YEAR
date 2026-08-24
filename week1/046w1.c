#include <stdio.h>

int countVowels(char *p);

int main () {
    int m;
    char *str= "Random GARBAGE exercise";
    m=countVowels(str);
    printf ("Number of vowels: %d",m);
    return 0;
}

int countVowels(char *p) {
    int i,t=0;
    for(i=0;*(p+i)!='\0';i++) {
        if ( *(p+i)=='a' ||*(p+i)=='e' ||*(p+i)=='i' ||*(p+i)=='A' ||*(p+i)=='E' || *(p+i)=='I' ||*(p+i)=='O' ||*(p+i)=='U') {
            t++;
        }
    }
    return t;
}