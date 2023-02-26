#include<stdio.h>

int main(){

    int number,is_prime=1;

    scanf("%d", &number);

    if(number > 0){
        for (int i = 2; i < number; i++)
        {
            if(number%i == 0){
                is_prime = 0;
                break;
            }
        }

        if(is_prime == 0){
            printf("Composite");
        }else{
            printf("Prime");
        }

    }

    return 0;
}
