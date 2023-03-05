#include<stdio.h>

void print(int count, int n){
    if(count > n) return;
    print(count+1, n);
    printf("%d\n", count);
}

int main(){

    int n;
    scanf("%d", &n);

    print(1,n);

    return 0;
}