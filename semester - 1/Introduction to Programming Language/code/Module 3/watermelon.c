#include<stdio.h>

int main(){

    int w;

    printf("Please enter the weight of the melon: ");
    scanf("%d", &w);

    if(w%4==0){ 
        printf("Possible");
    }else{
        printf("Not possible");
    }

}