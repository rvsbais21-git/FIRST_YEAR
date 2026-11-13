// c i-1  n = i-c

#include<stdio.h>
#include<string.h>

int main(){
    char s[]="I love DSA and programming";
    int n=strlen(s);
    int c=0;
    char temp;
    for(int i=0;i<=n;i++){

        if(s[i]==' '){
            for(int q=0;q<(i-c)/2;q++){
                temp=s[c+q];
                s[c+q]=s[i-q-1];
                s[i-q-1]=temp;
            }
            c=i+1;
        }
    }
    for(int i=0;i<(n-c)/2;i++){
        temp=s[c+i];
        s[c+i]=s[n-i-1];
        s[n-i-1]=temp;
    }

    for(int i=0;i<n;i++){
        printf("%c",s[i]);
    }
    return 0;
}