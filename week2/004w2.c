#include <stdio.h>
#include <string.h>


int main () {
    int i,n,s;
    FILE* fptr;
    fptr=fopen("Hello.txt","w");
    
    printf ("Enter number of integers required: ");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++) {
        printf("Enter element at %d position: ",i);
        scanf("%d",&s);
        fprintf(fptr,"%d ",s);
    }

    fclose(fptr);

    fptr=fopen("Hello.txt","a");
    fprintf(fptr,"%d ",34);
    fprintf(fptr,"%d ",546);
    fclose(fptr);

    fptr=fopen("Hello.txt","r");
    
    while (fscanf(fptr,"%d",&n)!=EOF) {
        printf ("%d ",n);
    }
    
    fclose(fptr);
    return 0;
}
