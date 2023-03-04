#include<stdio.h>

struct Student
{
    double mark;
    char name[50];
    int id;
};

void printStudent(int n,struct Student s){
    printf("Student NO - %d\n",n+1);
    printf("Name: %s\n",s.name);
    printf("ID: %d\n",s.id);
    printf("Mark: %.2lf\n",s.mark);
}

int main(){
    
    int n;
    scanf("%d",&n);

    struct Student students[n];

    for(int i=0;i<n;i++){
        scanf("%s",students[i].name);
        scanf("%d",&students[i].id);
        scanf("%lf",&students[i].mark);
    }

    double sum = 0;

    for(int i=0; i<n;i++){
        if(students[i].id %2 == 0){
            sum += students[i].mark;
            printStudent(i,students[i]);
        }
    }

    printf("Total number = %.lf\n",sum);

}
