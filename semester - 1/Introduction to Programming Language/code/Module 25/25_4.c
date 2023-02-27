#include<stdio.h>

int main(){

    int a = 5;
    printf("a = %d\n", a);
    int* p = &a;
    printf("p = %p\n",p);

    int** q = &p;
    printf("q = %p\n",q);
    **q = 7;
    printf("a = %d\n", a);


    return 0;
}