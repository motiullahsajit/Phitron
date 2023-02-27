#include<stdio.h>

int main(){

    
    int a = 222;
    int* p;

    p = &a;

    printf("a = %d\n", a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    int arr[] ={1,2,3};

    printf("arr 0 = %p\n", &arr[0]);
    printf("arr 1 = %p\n", &arr[1]);
    printf("arr  = %p\n", arr);
    printf("arr + 1 = %p\n", arr+1);


    return 0;
}