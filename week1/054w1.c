#include <stdio.h>
#include <string.h>

void max (char* p, int n);

int main () {
    int m,n;
    char arr[]="BANANA";
    n=strlen(arr);
    max (arr,n+1);
    return 0;
}

void max (char* p, int n) {
    char ans= *p;
    int i,j,c,v;
    for (c=0,v=0, i=0;i<n;i++) {
        if (*(p+i)==ans) {
            v++;
        }
        for (j=0;j<n;j++) {
            if (*(p+i)==*(p+j)) {
                c++;
            }
        }
        if (c>v) {
            ans=*(p+j);
        }
    }
    printf ("Maximum occuring character is: %c",ans);
    return;
}