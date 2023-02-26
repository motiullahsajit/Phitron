#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&matrix[i][j]);
        }
    }

     for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d",&matrix[i][j]);
            if(matrix[i][j]== i+1 && matrix[i][j]== j+1){
                matrix[i][j] +=3;
            }else if(matrix[i][j] == i+1){
                matrix[i][j] +=2;
            }else if(matrix[i][j] == j+1){
                matrix[i][j] +=1;
            }
        }
    }

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
