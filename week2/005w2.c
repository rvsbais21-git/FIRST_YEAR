#include <stdio.h>
#include <string.h>

int main() {
    typedef struct item {
        int code;
        float price;
        int quan;
    } item;
    int n,i;

    printf ("Enter variety of items in numbers: ");
    scanf("%d",&n);
    item arr[n];
    for (i=0;i<n;i++) {
        printf ("Enter code of item %d: ",i+1);
        scanf("%d", &(arr[i]).code  );
        printf ("Enter price : ");
        scanf("%f", &(arr[i]).price  );
        printf ("Enter stock: ");
        scanf("%d", &(arr[i]).quan  );
    }

    FILE* fptr;
    fptr=fopen("005w2.txt","w");

    for (i=0;i<n;i++) {
        fprintf(fptr,"%d     %0.2f     %d\n",(arr[i]).code,(arr[i]).price,(arr[i]).quan);
    }
    fclose(fptr);

    // Modify stock

    int e,h;
    printf ("Requested code: ");
    scanf ("%d",&e);
    for (i=0;i<n;i++) {
        if (arr[i].code==e) {
            break;
        }
    }
    if (arr[i].code==e) {
        printf ("Enter number of purchases: ");
        scanf("%d",&h);
        arr[i].quan=arr[i].quan-h;
        printf ("Modification complete.\n");
    }
    fptr=fopen("005w2.txt","w");
    for (i=0;i<n;i++) {
        fprintf(fptr,"%d     %0.2f     %d\n",(arr[i]).code,(arr[i]).price,(arr[i]).quan);
    }
    fclose(fptr);
    
    // end of modification
    fptr=fopen("005w2.txt","r");
    int o,t;
    float r;
    while (fscanf(fptr,"%d%f%d",&o,&r,&t)==3) {
        printf("%d     %0.2f     %d\n",o,r,t);
    }
    fclose(fptr);
    return 0;
}