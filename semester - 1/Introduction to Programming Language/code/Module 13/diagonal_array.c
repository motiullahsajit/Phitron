#include<stdio.h>

int main(){
    int i, j, row, col, p_diagonal_array =1,s_diagonal_array =1;

    scanf("%d %d",&row,&col);

    int arr[row][col];

    if(row==col){
        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                scanf("%d",&arr[i][j]);
            }
        }

        for(i=0; i<row; i++){
            for(j=0; j<col; j++){
                if(i!=j && arr[i][j] != 0){
                    p_diagonal_array = 0;
                    break;
                }

                if(((i+j) != (row -1)) && arr[i][j] != 0){
                    s_diagonal_array = 0;
                    break;
                }
            }
        }

        if(p_diagonal_array || s_diagonal_array){
            printf("This is a diagonal matrix");
        }else{
            printf("This is not a diagonal matrix");
        }

    }else{
        printf("Not a square matrix!\n");
    }


    return 0;
}