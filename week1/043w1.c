#include <stdio.h>
int main() {
    int i,n;
    char str[] = "Hello World";
    for (i=0;i<11;i++) {
        printf("%c\n",*(str+i));
    }
    return 0;
}