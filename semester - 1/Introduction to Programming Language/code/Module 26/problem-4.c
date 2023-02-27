#include<stdio.h>

int sum (int n){
    if(n == 1)
        return 1;
    else
        return sum(n-1) + n;
}


int main(){

    int n;
    scanf("%d",&n);
    
    printf("sum = %d\n",sum(n));


    return 0;
}