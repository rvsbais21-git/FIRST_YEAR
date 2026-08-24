#include <stdio.h>
#include <string.h>

void check(char* p, int n);



int main () {
    int m,n;
    char arr[]="banana";
    n=strlen(arr);
    check(arr,n+1);  
    return 0;
}

void check(char* p, int n) {
    int i,ans=0;
    char in='a';
    for (i=0;i<n;i++) {
        if (*(p+i)==in) {
            ans++;
        }
    }
    printf("Character '%c' occurence: %d",in,ans);
}

