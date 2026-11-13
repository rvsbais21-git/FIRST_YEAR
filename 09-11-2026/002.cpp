#include <stdio.h>
#include <string.h>

char scheck(char s[],int n){
    int count,q;
    for(int i=0;i<n;i++){
        count=0;
        for(q=0;q<n;q++){
            if(s[i]==s[q]){
                count++;
            }
        }
        if(count==1) {
            return s[i];
        }
    }
    return '*';
}

int main(){
    char s[]="pulupl";
    int n=strlen(s);
    printf("First unique character: %c\n",scheck(s,n));
    return 0;
}