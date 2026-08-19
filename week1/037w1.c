#include <stdio.h>

int main () {
    int i,n;
    int arr[] = {16, 56, 34, 232, 3343, 22, 7,90000,34,2342,3332}; //arr[n]
    int *p = arr;
    n=*p;
    
    for(i=0;i<10;i++) {
        if (n<(*(p+1))) {
            n=(*(p+1));
        }
        p++;
    }

    printf("Largest number is: %d",n);
    return 0;
}