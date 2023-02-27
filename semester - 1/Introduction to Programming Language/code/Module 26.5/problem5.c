#include<stdio.h>

int get_sum(int n){
    int sum = 0;
    int x;
    for(int i = 0; i < n; i++){
        scanf("%d", &x);
        if(x%10 == 0){
            sum += x;
        }
    }

    return sum;
}

int main(){

    int n;
    scanf("%d",&n);

    printf("%d\n",get_sum(n));


    return 0;
}