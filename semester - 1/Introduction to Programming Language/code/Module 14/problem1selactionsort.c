#include<stdio.h>

int main(){

    int n=8, i,j;

    int ara[8]={12, 7, 9, 3, 15, 2, 6, 5};
    int sorted_ara[8];
   

    for (i=0; i<8; i++){
        printf("%d ",ara[i]);
    }

    printf("\n");
    int min, min_index;

    for(j=0;j<8;j++){
        min_index = 0;
        min = ara[0];
        for(i = 0; i <n; i++){
        if(ara[i] < min){
            min = ara[i];
            min_index = i;
        }
        }

        sorted_ara[j] = min;
        ara[min_index]= 9999;
    }

    for (i=0; i<8; i++){
        printf("%d ",ara[i]);
    }

    printf("\n");

    for (i=0; i<8; i++){
        printf("%d ",sorted_ara[i]);
    }




    return 0;
} 