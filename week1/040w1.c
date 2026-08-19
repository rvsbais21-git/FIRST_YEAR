#include <stdio.h>
void sort(int* p, int n);

int main () {
    int i,n=6;
    int arr[6] = {7, 2, 9, 1, 5, 3};
    int* p=arr;
    sort(arr, n);

    for (i=0;i<n;i++) {
        printf ("%d ",*p);
        p++;
    }

    return 0;
}

void sort(int* p, int n) {
    int q,i,t;
    for (i=0;i<n;i++) {
        for(q=0;q<n;q++) {

            if ((*(p+i))<(*(p+q))) {
                t=(*(p+i));
                (*(p+i))=(*(p+q));
                (*(p+q))=t;

            }

        }
    }
    return;
}