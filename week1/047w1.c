#include <stdio.h>

void upper(char *p);

int main () {
    char str[] = "Hello woRld";
    upper(str);
    printf ("%s",str);
    return 0;
}

void upper(char *p) {
    int i;
    for(i=0;*(p+i)!='\0';i++) {
        if ( *(p+i)>92) {
            *(p+i)=*(p+i)-32;
        }
    }
    return;
}