// 1 2 3 2 4 2 5    7
#include <stdio.h>

int main() {
    int n,i,t,s=0;
    printf ("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf ("Enter the number at %d index: ",i);
        scanf ("%d",&arr[i]);
    }
    printf ("Enter the number wished to find: ");
    scanf("%d",&t);

    for (i=0;i<n;i++) {
        if (t==arr[i]) {
            s++;
            printf ("%d was found at index %d \n",t,i);
        } else { continue;}
    }
    printf ("\n Total number of occurences: %d",s);

    return 0;
}