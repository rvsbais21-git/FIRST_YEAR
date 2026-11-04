#include <stdio.h>
int main() {
    int n,i,c,t;
    scanf("%d",&n);
    int arr[n], arr2[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<(n-1);i++){
        arr2[i+1]=arr[i];
    }
    arr2[0]=arr[n-1];
    for(i=0;i<n;i++){
        arr[i]=arr2[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}