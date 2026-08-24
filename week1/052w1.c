#include <stdio.h>
#include <string.h>

int mystrcmp(char* a, char* b, int n);

int main() {
    int m,n;
    char f[]="abc";
    char s[]="abd";
    n=strlen(f);
    m= mystrcmp(f, s, n+1);
    printf ("%d",m);
    return 0;
}

int mystrcmp(char *a, char *b, int n) {
    int s=0,i;
    for (i=0;i<n;i++) {
        if ( *(a+i) > *(b+i) )
        {
            s++;
            break;
        }
        
        if ( *(a+i) < *(b+i) )
        {
            s--;
            break;
        }
        
        if ( *(a+i) == *(b+i) )
        {
            continue;
        }
        
    }

    if (s>0)
    {
        return 1;
    }
    if (s==0)
    {
        return 0;
    }
    if (s<0)
    {
        return -1;
    }
}