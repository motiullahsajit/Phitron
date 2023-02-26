#include<stdio.h>

int main(){

    int row=4, col=3;

    int i, j;

    int arr [row][col];

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    return 0;
}