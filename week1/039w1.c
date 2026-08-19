#include <stdio.h>
void re (int* p, int n);

int main() {
    int i;
    int arr[] = {1, 2, 3, 4, 5, 6};
    int* p=arr;
    re(arr, 6);
    
    for (i=0;i<6;i++) {
        printf ("%d ",*p);
        p++;
    }

    return 0;
}

void re (int* p, int n) {
    int i,t;
    for(i=0;i<n/2;i++) {
        t=*(p+n-1-i);
        *(p+6-1-i)=*(p+i);
        *(p+i)=t;
    }
    return;
}