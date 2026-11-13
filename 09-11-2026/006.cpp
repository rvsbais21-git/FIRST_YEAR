#include <stdio.h>

int check(int arr[],int n,int tar){
    int sum=0,i=0;
    int *p=arr;
    int *q=arr+n-1;
    while(q>p){
        if(tar== *(p)+ *(q)){
            return 1;
        }
        if(tar>= *(p+i)+ *(q-i)){
            p++;
        }
        if(tar<= *(p+i)+ *(q-i)){
            q--;
        }
    }
    return 0;
}

int main(){
    int arr[]={2,7,10,15};
    int tar=13;
    int answer=check(arr,sizeof(arr)/sizeof(int),tar);
    printf("%d\n",answer);
    return 0;
}