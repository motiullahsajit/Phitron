#include<stdio.h>

int main(){

    int ara[15];
    int i;
    for(i=0; i<15;i++){
        if(i==0){
            ara[i] = 1;
        }else{
            ara[i] = ara[i-1] * 2;
        }
    }

    for(i=0; i<15;i++){
        printf("%d ",ara[i]);
    }

    return 0;
}
