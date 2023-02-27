#include<stdio.h>

int main(){

    int a = 123;

    int* p = &a;

    int* q = p;

    *q = 321;

    printf("%d\n", a);

    return 0;
}