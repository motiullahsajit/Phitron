#include<stdio.h>

int main(){
    int a,b,c;

    printf("Please enter the three numbera : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a==b && b==c){
        printf("They are equal");
    }else if (a == b && b > c){  
        printf("A and B both are bigger");
    }else if (a == c && c > b){
        printf("A and C both are bigger");
    }else if (b==c && c >a){
        printf("B and C both are bigger");
    }else if (a >b && a >c){
        printf("A is bigger");
    }else if (b >a && b >c){
        printf("B is bigger");
    }else if (c >a && c >b){
        printf("C is bigger");
    }

    return 0;
}