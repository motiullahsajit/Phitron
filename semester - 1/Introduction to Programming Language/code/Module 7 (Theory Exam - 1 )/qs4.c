#include<stdio.h>

int main(){

    long long int number;
    int sum=0;

    scanf("%lld",&number);

    while(number !=0){
        sum += number%10;
        number = number/10;
    };

    printf("%d",sum);

    return 0;
}

