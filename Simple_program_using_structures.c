#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    float gpa;
};

int main() 
{
    struct Student student1;

 
    strcpy(student1.name, "Alice Smith"); 
    student1.age = 20;
    student1.gpa = 3.8;

 
    printf("Student Details:\n");
    printf("----------------\n");
    printf("Name: %s\n", student1.name);
    printf("Age:  %d\n", student1.age);
    printf("GPA:  %.2f\n", student1.gpa);

    return 0;
}
