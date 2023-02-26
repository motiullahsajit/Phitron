#include<stdio.h>

int main(){
    int mat1[3][3],mat2[3][3],ans[3][3];
    int i,j;
    
    printf("Enter matrix 1: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter matrix 2: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            ans[i][j]= mat1[i][0]*mat2[0][j]+mat1[i][1]*mat2[1][j]+mat1[i][2]*mat2[2][j];
        }
    }

     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}