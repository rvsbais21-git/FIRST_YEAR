#include <stdio.h>
#include <limits.h>
int sq(int n);
void fib (int n);
void pr(int n);
int fact(int n);
void revarr(int* p, int n);


int main () {
    int a,b,c;
    float f;
    f=((a+b+c)/3);
    printf("Enter the three numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    printf ("Sum of the numbers: %d\n",(a+b+c));
    printf ("Average of the numbers: %.1f\n",f);

    if (a%2==0) {
        printf ("Even\n");
    } else {
        printf ("Odd\n");
    }
    c=0;
    for (b=2;b<=a;b++) {
        if (a%b==0) {
            c++;
        }
    }
    if (c==1) {
        printf ("Prime\n");
    } else {
        printf ("Not prime\n");
    }

    c=sq(a);
    printf("Square of a: %d\n",c);

    // recurssion practice 
    c=fact(a);
    
    printf("Factorial of a: %d\n",c);

    pr(a);

    printf ("Taking the first number as the number of elements in an array.....\n");
    int arr[a];
    int i;
    for (i=0;i<a;i++) {
        printf ("Enter number at index %d",i);
        scanf ("%d",&arr[i]);
    }

    printf("Reversing this thing....\n");
    revarr(arr,a);
    
    // FINDING MAX TERM
    c=INT_MIN;
    for (i=0;i<a;i++) {
        if(arr[i]>c) {
            c=arr[i];
        }
    } 
    printf ("The biggest term is: %d\n\n",c);
    int q;
    b=0;

    for (i=0;i<a;i++) {
        for(q=0;q<a;q++) {
            if (arr[i]==arr[q]) {
                b++;
            }
            if(b==1) {
                printf("Unique element %d exists at index %d \n",arr[i],i);
            }
        }
    }
    b=0;
    for(i=0;i<a;i++) {
        b=b+arr[i];
    }
    printf("Sum of terms of array: %d\n",b);
    // what is sort manually? i have no idea about remove duplicates,
    // second largest is.... i forgot, need to practice it again
    c=INT_MIN;
    for(i=0;i<a;i++) {
        if (arr[i]>c) {
            b=c;
            c=arr[i];
        }
    }
    printf ("Second largest is: %d",b);

    return 0;
}

void revarr(int* p, int n){
    int i,t;
    for(i=0;i<n/2;i++) {
        t=*(p+i);
        *(p+i)=*(p+n-i-1);
        *(p+n-i-1)=t;
    }
}

int sq (int n) {
    return n*n;
}

int fact(int n) {
    int s;
    if (n==1) {return 1;}
    fact(n-1);
    s=1;
    s=s*n;
    return s;
}

void pr(int n) {
    if (n==0) {return;}
    pr(n-1);
    printf ("%d",n);
}

void fib (int n) {
    int a,b,c;
    a=1;
    b=1;
    fib(n-1);
    if (n==0) {return;}
    c=a+b;
    a=b;
    b=c;
    printf ("%d ",c);
}

/* lets practice solid good level questions before structures, files,and dynamic memory, add on strings too
i hope its good enough :)*/