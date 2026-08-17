/*67 121 43 65 88 54*/


#include <stdio.h>
#include <limits.h>
int main() {
    int n,i,t=INT_MIN,q=INT_MIN;
    printf ("Enter the number of elements in the array: ",i);
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) {
        printf ("Enter the number at %d index: ", i);
        scanf ("%d",&arr[i]);
    }
    
    for (i=0;i<n;i++) {
        if(arr[i]>q) {
            q=arr[i];
        }
    }
    for (i=0;i<n;i++) {
        if(arr[i]>t && arr[i]<q) {
            t=arr[i];
        }
    }

    printf ("Second largest is: %d",t);
    return 0;
}