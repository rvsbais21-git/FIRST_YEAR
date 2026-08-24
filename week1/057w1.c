//Structures
/*
 
*/
#include <stdio.h>
#include <string.h>
int main(){
    struct student {
        char name [100];
        int roll;
        float CGPA;
        char grade;
    };
        
    struct student s1;
    strcpy(s1.name,"Agrini Singh");
    s1.roll=67;
    s1.CGPA=0.00;
    s1.grade='F';
 
    printf ("Name is: %s\n",s1.name);
    printf ("Roll no. is: %d\n",s1.roll);
    printf ("CGPA is: %f\n", s1.CGPA);
    printf ("Grade is: %c\n",s1.grade);
    return 0;
}