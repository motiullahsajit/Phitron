#include<stdio.h>

int main(){

    long long int number;
    int count=0;

    scanf("%lld",&number);

    do{
        number = number/10;
        count++;
    }while(number !=0);


    printf("%d digits",count);

    return 0;
}

