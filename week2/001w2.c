#include <stdio.h>
#include <string.h>
typedef struct student {
    char name[100];
    int roll;
    float cgpa;
    char grade;
} stu;

void printst (stu q);

int main () {
    stu s1;
    printf("Enter name: ");
    fgets(s1.name,100,stdin);
    printf("Enter roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter cgpa: ");
    scanf("%f",&s1.cgpa);
    printf("Enter grade: ");
    scanf(" %c",&s1.grade);
    printst (s1);
    return 0;
}

void printst (stu q) {
    printf ("Name is: %s",q.name);
    printf ("Roll no. is: %d\n",q.roll);
    printf ("CGPA is: %0.4f\n",q.cgpa);
    printf ("Grade is: %c\n",q.grade);
}