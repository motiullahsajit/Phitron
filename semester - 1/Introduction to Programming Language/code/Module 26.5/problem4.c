#include<stdio.h>

float area(float x){
    float pi = 3.1416;
    return ((x * x )* pi);
}

int main(){

    float r;
    scanf("%f",&r);

    printf("%f\n",area(r));



    return 0;
}