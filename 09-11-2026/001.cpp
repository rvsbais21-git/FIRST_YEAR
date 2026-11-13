#include <stdio.h>
#include <string.h>
int arrcheck(char s1[],int n1){
int i;
    for(i=0;i<=n1/2;i++){
        if(s1[i]!=s1[n1-i]){
            return 0;
        }
    }
    return 1;
}

int main() {
    char s1[]= "netiten";
    char s2[]="tneeeeent";
    int n1=strlen(s1);
    int n2=strlen(s2);
    printf("%d\n",arrcheck(s1,n1-1));
    printf("%d",arrcheck(s2,n2-1));
    return 0;
}