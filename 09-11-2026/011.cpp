#include <iostream>
using namespace std;

int main(){
    int sum=0,temp=1;
    int mat[4][4];
    for(int i=0;i<4;i++){
        for(int q=0;q<4;q++){
            mat[i][q]=temp;
            temp++;
        }
    }
    //data fed
    //the question of diagonal elements total sum was easy
    return 0;
}