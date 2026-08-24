#include <stdio.h>
int main () {
    int i,t=0;
    char *str="abcdefghij";
    for(i=0;*(str+i)!='\0';i++) {t++;}
    printf ("Length of string is: %d",t);
    return 0;
}