#include<stdio.h>

int main(){
    int n;

    printf("Please enter the value of n: ");
    scanf("%d", &n);

    // while(n>1){
    //     printf("--> %d\n", n);
    //     if(n%2==0){
    //         n = n/2;
    //     }else{
    //         n = n * 3 + 1;
    //     }
    // }

    for(int i = n; n>1;){
        printf("--> %d\n", n);
        if(n%2==0){
            n = n/2;
        }else{
            n = n * 3 + 1;
        }
    }

    printf("--> %d\n", n);

}