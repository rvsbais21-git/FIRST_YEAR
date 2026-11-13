#include <iostream>
using namespace std;

int main(){
    int mat[3][4]={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int *tar= &mat[2][1];
    int i=0,q=0;
    while(i<3){
        if(mat[i][0]<=*tar && mat[i][3]>=*tar){
            break;
        }
        i++;
    }
    int *st; int *end;
    st=&mat[i][0];
    end=&mat[i][3];
    int *mid=st + (end-st)/2;
    while(st<end){
        if(*mid==*tar){
            cout << "Answer exists"<<endl;
            return 0;
        }
        if(*mid>=*tar){
            st=mid;
        }
        if(*mid<=*tar){
            end=mid;
        }
    }
    cout<<"Answer does not exist"<<endl;
    return 0;
}