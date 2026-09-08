#include <string.h>
#include <stdio.h>

typedef struct student {
  int roll;
  float cgpa;
  char grade;  
} data;

void grader (data* q);
float avg (data* p, int n);
float high (data* p, int n);
float low (data* p, int n);
int gcount (data* p, int n);
void sort (data* p, int n);

int main () {
    printf ("Enter number of students in the class: ");
    int n,i;
    scanf ("%d",&n);

    data stu[n];

    for (i=0;i<n;i++) {
        printf ("Student no.%d\n",(i+1));
        printf ("Enter roll: ");
        scanf("%d",&stu[i].roll);
        printf ("Enter cgpa: ");
        scanf("%f",&stu[i].cgpa); 
        grader(&stu[i]);
    }
     
    float b=low (stu,n), a= high (stu,n), c= avg(stu,n);

    printf("Highest CGPA: %0.2f\n", a);
    printf("Lowest CGPA: %0.2f\n", b);
    printf("Average CGPA: %0.2f\n", c);

    int d;
    d=gcount(stu,n);
    printf("Number of A graders: %d\n",d);

    sort (stu, n);

    return 0;
}

void grader (data* q) {
    if (q->cgpa >=9) {
        q->grade='A';
    } else if (q->cgpa >=8) {
        q->grade='B';
    } else if (q->cgpa >=6) {
        q->grade='C';
    } else if (q->cgpa >=4) {
        q->grade='D';
    } else {
        q->grade='F';
    }
}


float avg (data* p, int n) {
    int i;
    float s=0;
    for (i=0;i<n;i++) {
        s=s+ (p+i)->cgpa;
    }
    return (s/n);
}

float high (data* p, int n) {
    int i=0;
    float s=-1;
    for (i=0;i<n;i++) {
        if(s<(p+i)->cgpa) {
            s=(p+i)->cgpa;
        }
    }
    return s;
}

float low (data* p, int n) {
    int i=0;
    float s=11;
    for (i=0;i<n;i++) {
        if(s>(p+i)->cgpa) {
            s=(p+i)->cgpa;
        }
    }
    return s;
}

int gcount(data* p, int n) {
    int i,s=0;
    for (i=0;i<n;i++) {
        if ((p+i)->grade=='A') {
            s++;
        }
    }
    return s;    
}

void sort (data* p, int n) {
    int i,q;
    data t,M;
    for (i=0;i<n;i++) {
        for (q=0;i<n && q!=i;q++) {
            if ((p+i)->cgpa < (p+q)->cgpa) {
                t=*(p+i);
                M=*(p+q);
                *(p+q)=t;
                *(p+i)=M;
            }
        }
    }
    printf("Sorted cgpa inputs: ");
    for (i=0;i<n;i++) {
        printf(" %f",(p+i)->cgpa);
    }        
}