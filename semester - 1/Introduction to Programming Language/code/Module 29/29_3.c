#include<stdio.h>


struct Student
{
    char name[100];
    int id;
    int age;
    float weight;
};



int main(){

    struct Student s = {.weight = 49.9, .name = "Sajit", .id =663, .age = 21};

    printf("Student name: %s\n", s.name);
    printf("Student id: %d\n", s.id);
    printf("Student age: %d\n", s.age);
    printf("Student weight: %.2f\n", s.weight);
    
    return 0;
}