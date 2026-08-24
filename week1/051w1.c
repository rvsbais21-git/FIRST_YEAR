#include <stdio.h>
#include <string.h>
void mystrcpy(char* dest, char* src, int n);

int main () {
    int m;
    char a[50];
    char b[] = "Hello C";
    m=strlen(b)+1;
    mystrcpy(a, b, m);
    printf ("%s",a);
    return 0;
}

void mystrcpy(char* dest, char* src, int n) {
    int i;
    for (i=0;i<n;i++) {
        *(dest+i)=*(src+i);
    }
    return;
}