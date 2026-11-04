#include <stdio.h>

typedef struct student_information {
    int roll;
    char name[100];
    int marks[5];
    int average;
} student;

int main() {
    int n;
    scanf("%d",&n);
    
    student class1[n];
    int i,q,m;
    
    //INPUT OF THE ARRAY
    
    for(i=0;i<n;i++) {
        fgets(class1[i].name,sizeof(class1[i].name),stdin);
        
        scanf("%d", &class1[i].roll);

        for(q=0;q<5;q++) {
            scanf("%d",&class1[i].marks[q]);
        }
        class1[i].average=avg(&class1[i]);    
    }

    int r=-1; student t;
        for(i=0;i<n;i++) {
            for(q=0;q<n;q++){
                if(class1[i].average>class1[q].average) {
                    t=class1[i];
                    class1[i]=class1[q];
                    class1[q]=t;

                }
            }
        }

    return 0;
}

int avg(student* p){
    int s=0,i;
    for(i=0;i<5;i++){
        s=s+ p->marks[i];
    }
    return s/5;
}