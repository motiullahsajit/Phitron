#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    int age;
    float weight;
};

int main(){

    struct Student s1 = {"sajit", 663, 21, 49.5};
    struct Student s2 = {"sadman", 662, 21, 49.5};
    
    printf("Student 1: \n");
    printf("Student name: %s\n", s1.name);
    printf("Student id: %d\n", s1.id);
    printf("Student age: %d\n", s1.age);
    printf("Student weight: %.2f\n", s1.weight);

    printf("Student 2: \n");
    printf("Student name: %s\n", s2.name);
    printf("Student id: %d\n", s2.id);
    printf("Student age: %d\n", s2.age);
    printf("Student weight: %.2f\n", s2.weight);
    
    return 0;
}