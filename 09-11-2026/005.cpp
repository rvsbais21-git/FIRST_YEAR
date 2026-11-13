#include <stdio.h>
#include <limits.h>

int max (int a, int b) {
    if(a>b){
        return a;
    } else {
        return b;
    }
}
int main(){
    int s[]={3,-4,5,4,-1,7,-8}; int maxsum=INT_MIN, csum=0;
    for(int i=0; i<(sizeof(s)/sizeof(int));i++){
        csum+=s[i];
        maxsum=max(maxsum,csum);
        if(csum<=0){
            csum=0;
        }
    }
    printf("Max sum by Kadane's: %d\n",maxsum);
    return 0;
}