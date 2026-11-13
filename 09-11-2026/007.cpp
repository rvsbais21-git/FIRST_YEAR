#include<stdio.h>

struct note{
    int number;
    int freq;
};

int check(int arr[],int n){
 
 
    //sorting
  int temp;
  for(int i=0;i<n;i++){
    for(int q=i+1;q<n;q++){
        if(arr[q]<arr[i]){
            temp=q;
            q=i;
            i=temp;
        }
    }
  }


}

int main(){
    int arr[]={1,1,2,2,1,3,3,3,3,3,3,3,3,3};
    int n= (sizeof(arr)/sizeof(int));
    int r= check(arr,n);
    printf("%d\n",r);
    return 0;
}