#include<stdio.h>


struct Student
{
    char name[100];
    int id;
    int age;
};



int main(){

    struct Student s;
    
    scanf("%s",s.name);
    scanf("%d",&s.id);
    scanf("%d",&s.age);

    printf("Student name: %s\n", s.name);
    printf("Student id: %d\n", s.id);
    printf("Student age: %d\n", s.age);
    
    return 0;
}