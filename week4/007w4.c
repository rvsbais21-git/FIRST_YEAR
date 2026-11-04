#include <stdio.h>
#include<limits.h>

int maxarr(int *p,int n) {
    int i,s=INT_MIN;
    int second=INT_MIN;
    for (i=0;i<n;i++) {
        if(s<(*(p+i))) {
            s=(*(p+i));
        }
        if(second<(*(p+i)) && second<s) {
            second=(*(p+i));
        }
    }
    return second;
}

void uniarr (int* p, int n) {
    
}

void freq (int* p, int n) {
    int i,q,c=0;
    for (i=0;i<n;i++){
        
        for (q=0;q<i;q++) {
            
            c=0;

            if(*(p+q)==*(p+i)) {
                break;
            }
        }
        for(q=(p+q);q<n;q++) {
            if (*(p+i)==*(p+q)) {
                c++;
            }
        }

        printf("The frequency of %d is %d \n",*(p+i),c);
    }
}

void uni (int* p, int n) {

    int i,q,c;
    for(i=0;i<n;i++) {
        for(q=0;q<n;q++) {
            if (*(p+i)==*(p+q)) {
                c++;
            }
        }
        if(c==1) {
            printf("the element %d is unique.\n",*(p+i));
        }
    }
}

void reverse (int* p, int n) {
    int i,t;

    for(i=0;i<n/2;i++) {
        t=*(p+i);
        *(p+n-1-i)=*(p+i);
        *(p+n-1-i)=t;
    }
    return;
}

int find(int* p, int n) {
    char in,i,count=0;
    do {
        printf("Find negative, positive or zero (Enter m,p or z): ");
        scanf ("%c",&in);
    } while (in != 'z' && in != 'm' && in != 'p');

    if (in=='p') {
    for(i=0;i<=n;i++) {
        if(*(p+i)>0) {
            count++;
        }
    }
    } else if (in=='z') {

    for(i=0;i<=n;i++) {
        if(*(p+i)==0) {
            count++;
        }
    }
} else {

    for(i=0;i<=n;i++) {
        if(*(p+i)<0) {
            count++;
        }
    }
}



return count;
}

int main() {
    int i,n;
    int arr[n];
    printf("Enter number of elements in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf ("Element at index %d: ",i);
        scanf("%d",&arr[i]);
    }
    int m;
    m=maxarr(arr,n);
    printf("%d\n",m);
    return 0;
}