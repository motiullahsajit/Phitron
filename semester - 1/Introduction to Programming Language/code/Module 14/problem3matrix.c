#include<stdio.h>

int main(){
    int i,j,x,y,row_change,col_change;
    int ara[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&ara[i][j]);
            if(ara[i][j] == 1){
                x=i;
                y=j;
            }
        }
    }

    if(x<2)
        row_change = (2-x);
    else
        row_change = (x-2);

    if(y<2)
        col_change= (2-y);
    else
        col_change= (y-2);

    printf("%d \n",row_change + col_change);

    return 0;
} 