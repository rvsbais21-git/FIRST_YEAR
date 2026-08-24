#include <stdio.h>
#include <string.h>

void rev (char* p, int n);
void reverse();
void ptop(char* p);

void srev (char* p);
void brev (char* p, int n);
void prev ();

int main () {
    int i,n,m;
    char str[]="I love programming";
    n=strlen(str);
    srev (str);
    brev (str, n+1);
    prev (str);

    printf ("%s",str);
    return 0;
}

void srev (char* p) {
    int i,s=0;
    int t[50];
    for(i=0;*(p+i)!=' ';i++) {
        s++;
    }
    rev (p, s);
    return;
}

void brev (char* p, int n) {
    int i,s=0;
    int t[50];
    for(i=n;*(p+i)!=' ';i--) {
        s++;
    }
    rev (p, s);
    return;
}

void ptop(char* p) {
    int m,i,j=0;
    int arr[50];
    for(i=0;*(p+i)!='\0';i++) {
        if (*(p+i)==0) {
            arr[j]=p;
            j++;
        }
    }
    prev(arr);
}

void prev (char* p) {
    int i, t, m;
    for(i=0;*(p+i)>0;i++) {
         
    }
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