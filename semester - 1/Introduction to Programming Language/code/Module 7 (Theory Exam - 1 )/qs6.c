#include<stdio.h>
int main(){

    int first, second;

    printf("Enter the first number: ");
    scanf("%d",&first);

    printf("Enter the second number: ");
    scanf("%d",&second);

    if(first>second && first%second == 0){
        printf("The first number is divisible by the second number.");
    }else if(second>first && second%first == 0){
        printf("The second number is divisible by the first number.");
    }else{
        printf("None of them are divisible by the other.");
    }


    return 0;
}

