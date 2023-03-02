#include<stdio.h>

struct Student
{
    char name[100];
    int id;
    int age;
    float weight;
};


int main(){
    int n = 3 ;
    struct Student students[n];

    for(int i=0; i<n; i++){
        printf("Enter info of student no - %d\n", i+1);
        scanf("%s", students[i].name);
        scanf("%d",&students[i].id);
        scanf("%d",&students[i].age);
        scanf("%f",&students[i].weight);
    }

    for(int i=0; i<n; i++){
        printf("Student - %d\n", i+1);
        printf("Student name: %s\n", students[i].name);
        printf("Student id: %d\n", students[i].id);
        printf("Student age: %d\n", students[i].age);
        printf("Student weight: %.2f\n", students[i].weight);
    }
        
    return 0;
}