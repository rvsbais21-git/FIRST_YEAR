#include <stdio.h>
#include <string.h>

int main() {
    typedef struct item {
        int code;
        float price;
        int quan;
    } item;
    
    int j,n,i;

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
    fptr=fopen("006w2.txt","w");

    for (i=0;i<n;i++) {
        fprintf(fptr,"%d     %0.2f     %d\n",(arr[i]).code,(arr[i]).price,(arr[i]).quan);
    }
    fclose(fptr);

    // Modify stock AFTER PURCHASE

    int e,h,aa,ab,ac;
    printf("Enter number of items bought (variety of codes): ");
    scanf("%d",aa);
    item bill[aa];
    for(j=0;j<aa;j++) {       
        printf ("Enter code of item %d: ",j+1);
        scanf("%d", &(bill[j]).code  );
        
        for (i=0;i<n;i++) {
            if ((bill[j]).code==(arr[j]).code) {
                (bill[j]).quan==(arr[j]).quan;
            }
        }
        printf ("Enter stock: ");
        scanf("%d", &(bill[j]).quan  );
    }

    for(j=0;j<aa;j++) {
        for (i=0;i<n;i++) {
            if ((bill[j]).code==(arr[j]).code) {
                (arr[j]).quan==(arr[j]).quan-(bill[j]).quan;
            }   
        }
    }

    //   BILL PRINT

    FILE* fpt;
    int qr=0,qwert;
    fpt=fopen("BILL.txt","w");
    fprintf (fpt,"%s","=======BILL=======\n");
    for(i=0;i<aa;i++) {
        fprintf(fpt,"Item code of item %d: %d\n",i+1,(bill[i]).code);
        fprintf(fpt,"Quantity: %d\n",(bill[i]).quan);
        qwert=((bill[i]).quan * (bill[i]).price);
        fprintf(fpt,"Item price : %d x %f = %d",(bill[i]).quan,(bill[i]).price,qwert);
        qr=qr+qwert;
    }
    fprintf(fpt,"Total money to be paid (taxed): %d\n\n",(qr*1.2));
    fprintf (fpt,"%s","=================\n");
    fclose (fpt);

    fptr=fopen("006w2.txt","r");
    int o,t;
    float r;
    while (fscanf(fptr,"%d%f%d",&o,&r,&t)==3) {
        printf("%d     %0.2f     %d\n",o,r,t);
    }
    fclose(fptr);
    return 0;
}