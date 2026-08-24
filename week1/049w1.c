// Reverse the string
#include <stdio.h>
#include <string.h>
void rev (char* p, int n);

int main () {
    char sen[]=".gnimmargorp evol I";
    int n;
    n= strlen(sen); //char array size
    printf("Before: %s\n", sen);
    rev (sen, n);
    
    return 0;
}

void rev (char* p, int n) {
    int i,t;
    for (i=0;i<(n)/2;i++) {
        t=*(p+i);
        *(p+i) = *(p+n-1-i);
        *(p+n-i-1)=t;
    }
    return;
}