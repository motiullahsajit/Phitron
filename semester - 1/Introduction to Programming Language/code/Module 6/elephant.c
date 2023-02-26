#include<stdio.h>

int main(){

    long long int  input;
    scanf("%lld",&input);

    printf("%lld",((input/5)+(input%5!=0)));
        
    return 0;
}