#include<stdio.h>

struct Student
{
    int id;
    double weight;
    int age;
};


int main(){
    
    struct Student s = {.id = 0, .weight = 4.3, .age = 53};
    struct Student s2 = {.id = 1, .weight = 5.3, .age = 35};
    struct Student* sp;

    sp = &s;
    printf("%d\n",sizeof(struct Student));
    printf("%p\n%p\n",sp,&s2);
    
    printf("id = %d\nweight = %lf\nage = %d\n",sp->id,sp->weight,sp->age);

    return 0;
}