#include<stdio.h>

struct Comp{
    double real;
    double imag;
};


void printcomp(struct Comp c){
    printf("%.3lf +  %.3lfi\n", c.real, c.imag);
};


struct Comp addcomp(struct Comp a,struct Comp b){
    struct Comp ans;
    ans.real = a.real + b.real;
    ans.imag = a.imag + b.imag;
    return ans;
}

struct Comp mulcomp(struct Comp a,struct Comp b){
    struct Comp ans;
    ans.real = a.real * b.real - a.imag * b.imag;
    ans.imag = a.real * b.imag + a.imag * b.real;
    return ans;
}

int main(){

    struct Comp c1 = {5.9,3.1};
    struct Comp c2 = {-2.5,3.7};
    
    printf("Addition: \n");
    printcomp(addcomp(c1,c2));
    printf("Multiplication: \n");
    printcomp(mulcomp(c1,c2));


    return 0;
}