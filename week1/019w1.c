#include <stdio.h>
int main() {
    int n,i,t;
    printf ("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf ("Enter the number at %d index: ", i);
        scanf ("%d",&arr[i]);
    }
    // 0123
    // 01234
    for (i=0;i<n/2;i++) {
        t=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=t;
    }

    for (i=0;i<n;i++) {
        printf ("%d ",arr[i]);
    }
    return 0;
}