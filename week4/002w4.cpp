#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    string s;
    int i,c,space,cons;
    cout<< "Enter your name: " << endl;
    getline(cin,s);
    cout<< "Your name is: " << s <<endl;
    cout<< "The length of the string is: " << s.length() <<endl;

    for (i=0;i<s.size();i++) {
        cout<< s[i] << " " << i <<endl;
    }

    for (i=0;i<s.size();i++) {
        if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') {
            c++;
        }
    }
    for (i=0;i<s.size();i++) {
        if (s[i]==' ') {
            space++;
        }
    }
    cons= s.size() - (space + c);

    cout<< "Number of vowels: " << c <<endl;
    cout<< "Number of consotants: " << cons <<endl;
    cout<< "Number of spaces: " << space <<endl;
    int count;

    for(i=0;i<s.size();i++) {
        if (s[i]=='r') {
            count++;
        }
    }
    char t;
    int n=s.size();
    cout<< "Number of r in name: " <<count <<endl;
    for (i=0;i<(n/2);i++) {
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    cout << "Reverse of string: " <<s;
    string S;
    S=s;
    for (i=0;i<(n/2);i++) {
        t=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=t;
    }
    if (s==S) {
        cout<< "Palindrome" <<endl;
    } else {
        cout<< "Not Palindrome" <<endl;
    }

    for (i=0;i<n;i++) {
        if (S[i]<='z'||S[i]>='a') {
            S[i]=toupper(S[i]);
        } else if (S[i]>='A'||S[i]<='Z') {
            S[i]=tolower(S[i]);
        }
    }
    cout<<"Lower/Upper: " <<S;
    c=0;
    for (i=0;i<n;i++) {
    if (S[i]<='z'||S[i]>='a') {
        c++;
    }
    }
    cout <<"Number of lowercase charecters: "<<c<<endl;
    char find='a';
    cout<< "a first found at: " << s.find(find) <<endl;
    return 0;
}