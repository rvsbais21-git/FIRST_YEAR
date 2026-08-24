//Question 6: Remove spaces
#include <stdio.h>
#include <string.h>
void reader(char* p, int n);


int main () {
    int n;
    char str[] = "start Hello woRld qwq qweq 1213 re43534 12 ewe 4342r end";
    n= strlen(str);
    reader(str, n);
    printf ("%s",str);
    return 0;
}   

void reader(char* p, int n) {
    char temparr[n+1];
    int j=0,i;
    for (i=0;i<=n;i++) {
        if (*(p+i)==' ') {
            continue;
        }
        temparr[j]=*(p+i);
        j++;
    }
    

    for (i=0;i<=n;i++) {
        *(p+i)= temparr[i];
    }

    for (i=j+1;i<=n;i++) {
        *(p+i)=' ';
    }
}
