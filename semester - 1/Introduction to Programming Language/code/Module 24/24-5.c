// #include<stdio.h>

// int factorial(int n){
//     if(n==0) return 1;
//     else return n * factorial(n-1);
// }

// int main(){

//     int n;
//     scanf("%d",&n);
//     printf("%d\n",factorial(n));

//     return 0;
// }

#include<stdio.h>
int value=3;
void foo(int n)
{
    value*=2;
}
int main()
{
    printf("%d \n",value);
    foo(2);
    return 0;
}