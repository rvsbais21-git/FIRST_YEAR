#include <stdio.h>
#include <string.h>
 
typedef struct employee {
    char name [100];
    int ID;
    float salary;
    float tax;
    float submit;
}data;

void finan(data* q);
void printe(data q);

int main() {

    data e1;
    printf("Enter name: ");
    fgets(e1.name,100,stdin);
    printf("Enter ID: ");
    scanf("%d",&e1.ID);
    printf("Enter salary: ");
    scanf("%f",&e1.salary);
    printf("Enter percent tax: ");
    scanf(" %f",&e1.tax);
    
    finan(&e1);
    printe(e1);
    return 0;
}

void finan(data* q) {
    q->submit = (q->salary * ((100- q->tax)/100) );
    return;
}
 
void printe (data q) {
    printf ("Name is: %s",q.name);
    printf ("ID is: %d\n",q.ID);
    printf ("Return amount is: $%0.2f\n",q.submit);
}