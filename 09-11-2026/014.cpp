#include <vector>
#include <iostream>
using namespace std;

typedef struct data{
    int number;
    int frequency;
} data;

int main(){
    vector <int> vec; 
    int i=0,n;
    
    cin>> n;

    while(i<n){
        cin>>vec[i];
        i++;
    }
    int sum=0;i=0;
    while(i<n){
        sum+=vec[i];
        i++;
    }
    cout<<sum<<endl;i=0;
    while(i<n){
        if(i%2!=0){
            cout<<vec[i]<<" ";
        }
        i++;
    }
    cout<<endl;i=0;
    while(i<n){
        if(i%2==0){
            cout<<vec[i]<<" ";
        }
        i++;
    }
    cout<<endl;i=0;
    int tar=5;
    int *st=&vec[0]; 
    int *end=&vec[9]; 
    int *mid;
    mid= st + (end-st)/2;
    while(i<n){
        if(*mid==tar){
            cout<<tar<<endl;
        }
        if(*mid>=tar){
            end=mid;
        }
        if(*mid<=tar){
            st=mid;
        }
    }
    cout<<endl;i=0;
    int r;
    vector <int> newer;

    for(int i=0;i<n/2;i++){
        newer[i]=vec[i];
    }
    

    for(int i=0;i<n/2;i++){
        r=vec[i];
        vec[i]=vec[n-i-1];
        vec[n-i-1]=r;
    }
    for(int i=0;i<n/2;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    int c=0;
    for(int i=0;i<n/2;i++){
        if(newer[i]!=vec[i]){
            c++;
        }
    }
    if(c!=0){
        cout<<"not pal"<<endl;
    } else{
        cout<<"pal"<<endl;
    }
    int largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(largest<newer[i]){
            largest=newer[i];
        }
    }
    cout<<"Largest: "<<largest<<endl;
    int second=INT_MIN;
    for(int i=0;i<n;i++){
        if(second<newer[i]&&second<largest){
            second=newer[i];
        }
    }
    cout<<"Second largest: "<<second<<endl;

    vector <int> dups={1,2,3,2,3,2,1,2,5,2,1,2,3,4,4,4,2,2,2,1,2,2,2,1,2,3,2,3,1,3,2,3,2,2,3,2};
    int size=dups.size();
    for(int i=0;i<size;i++){
        for(int q=i+1;i<size;i++){
            if(dups[i]==dups[q]){
                dups.erase(dups.begin()+(q-1));
            }
        }
    }
    for(int i=0;i<dups.size();i++){
        cout<<dups[i]<<" ";
    }

    vector <int> visited={1,23,21,2,3,4,3,2,2,224,5,32,34,3,232,4,3,2,3,1,34,22,32,21,2,3,3232,23,21,2,3,33,3,1,2,3,2,2,32,1,1,2,2,3,3432,2,2};
    vector <struct data> visitor;
    int k=0;
    for(int i=0; i<visited.size();i++){
        for(int q=0; q<visited.size();q++)
        if(visited[i]!=visited[q]){
            visitor[k].number=visited[i];
            k++;
        }
    }
    
    for(int i=0; i<=k;i++){
        visitor[k].frequency=0;

    }
    int q=0;
    
    while (q<=k){
    for (int i = 0; i < n; i++){
            if(visitor[q].number==visited[i]){
            visitor[q].frequency++;
            }
        }
        q++;
    }
    
    cout<<endl;    
    return 0;
}