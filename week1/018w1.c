#include <stdio.h>
int main() {
    int n,i;
    printf ("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf ("Enter the number at %d index: ", i);
        scanf ("%d",&arr[i]);
    }
    for (i=0;i<n;i++) {
        printf ("%d \n",arr[i]);
    }
    return 0;
}