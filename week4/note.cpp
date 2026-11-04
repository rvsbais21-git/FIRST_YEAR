#include <iostream>
#include <vector>
using namespace std;

int fac(int n);

int main() {
int i,q,c,k=0,n;

vector <char> unique;
string expression;
cin>>expression;

for(i=0;expression[i]!='\0';i++) {
    c=0;
    for(q=0;q<i;q++) {
        if(expression[q]==expression[i]) {
            c++;
        }
    }
    if(c==0) {
        unique[k]=expression[i];
    }
    
}
vector <int> numb;
//OCCURENCES OF ELEMENTS
    k=0;
    for(i=0;i<unique.size();i++) {
        c=0;
        for(q=0;q<expression.size()-1;q++){
            if(unique[i]==expression[q]){
                c++;
            }
        }
        numb[k]=c;
        k++;
    }

    //to calculate;
    int answer,numerator;
    numerator= fac(expression.size()-1); 
    for(i=0;i<numb.size();i++) {
        answer=(numerator/fac(numb[i]));
    }
    cout<<answer<<endl;;
return 0;
}


int fac(int n) {
    if(n==0) {
        return 1;
    }
    int i,s=1;
    for(i=1;i<=n;i++) {
        s*=i;
    }
    return s;
}
