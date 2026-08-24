#include <stdio.h>

struct student {
    char *name;
    int roll;
    float cgpa;
    char grade;
};

int main () {
    struct student s1;
    s1.grade='A';
    s1.name="wdad";
    s1.cgpa=121;
    s1.roll=323123;
    struct student s2;
    struct student s3;
    
    return 0;
}