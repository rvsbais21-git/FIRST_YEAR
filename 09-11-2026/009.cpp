#include <iostream>
using namespace std;
int main(){

    int mat[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int tar=6;
    for(int i=0;i<3;i++){
        for(int q=0;q<3;q++){
            if(mat[i][q]==tar){
                cout<< i <<" "<< q<<endl;
                break;
            }
        }
        
    }
    return 0;
}