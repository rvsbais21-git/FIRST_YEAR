// Reverse the string
#include <stdio.h>
#include <string.h>
void rev (char* p, int n);

int main () {
    char sen[]=".gnimmargorp evol I";
    int c=0,i,n;
    n= strlen(sen); //char array size
    char nes[n+1];
    strcpy(nes,sen);
    printf("Before: %s\n", sen);
    rev (sen, n);
    
    for (i=0;i<n;i++) {
        if (nes[i]==sen[i]) {
            c++;
    }
    }
    if (c==n) {
        printf ("Palindrome");
    } else {
        printf ("Not Palindrome");
    }
    return 0;
}

void rev (char* p, int n) {
    int i,t;
    for (i=0;i<(n-1)/2;i++) {
        t=*(p+i);
        *(p+i) = *(p+n-1-i);
        *(p+n-i-1)=t;
    }
    return;
}