#include <stdio.h>
int main() {
    int i,t;
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;
    
    for (i=0;i<3;i++) {
        t=*(p+5-1-i);
        *(p+5-1-i)=*(p+i);
        *(p+i)=t;
    }

    for (i=0;i<5;i++) {
        printf ("%d ",*p);
        p++;
    }

    return 0;
}