#include <stdio.h>
#include <string.h>

void sprint(char s[],int n){
    int q,i=0,count=1;
    
    while(i<n){
        
        if(s[i]==s[i+1]){
            count++;
        }
        if(s[i]!=s[i+1]){
            printf("%c%d",s[i],count);
            count=1;
        }
        i++;
    }
    
    printf("\n");
}

int main(){
    char s[]="abbcccddddeefggsssssss";
    int n=strlen(s);
    sprint(s,n);
    return 0;
}