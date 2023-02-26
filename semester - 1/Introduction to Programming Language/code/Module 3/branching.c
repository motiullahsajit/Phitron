#include<stdio.h>

int main(){

    // int x;
    // printf("Please enter an input: ");    
    // scanf("%d", &x);

    // if(x%2==0){
    //     printf("The number is Even!\n");
    // }else{
    //     printf("The number is Odd!\n");
    // }

    int a,b,c;

    printf("Please enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c){
        printf("A is large");
    }else if (b >a && b>c){
        printf("B is large");
    }else{
        printf("C is large");
    }
    
}