#include <iostream>
using namespace std;

int mountain_search(int* p,int n) {
    int* st=p; int* end= (p+n-1);
    int* mid;
    while(st<end) {
        mid= st+((end-st)/2);

        if(*mid<*(mid+1)) {
            //right side BS
            st=mid+1;
        } else if (*mid>*(mid+1)) {
            //left side BS
            end=mid;
        } else {
            return *mid;
        }
    }
}

int main(){
    int arr[]={1,3,5,7,10,8,6,2};
    int r,n= sizeof(arr)/sizeof(arr[0]);
    r=mountain_search(arr,n);

}