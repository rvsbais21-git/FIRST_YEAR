#include <iostream>
using namespace std;

int maxi(int a, int b){
    if(a>b){
        return a;
    } return b;
}

int main(){
    int sum=0,temp;
    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        temp=0;
        for(int q=0;q<3;q++){
            temp=temp+mat[i][q];
        }
        sum=maxi(sum,temp);
    }
    cout<<sum<<endl;
    return 0;
}