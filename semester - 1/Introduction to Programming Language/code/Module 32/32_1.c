#include<stdio.h>

void print(int count, int n){
    if(count > n) return;
    printf("%d\n", count);
    print(count+1, n);
}

int main(){

    int n;
    scanf("%d", &n);

    print(1,n);

    return 0;
}